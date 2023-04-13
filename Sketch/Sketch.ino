// CN_UC1
#define PIN_LCDBTN_SRC 6
#define PIN_LCDBTN_PWR 5
#define PIN_RESERVED   4
#define PIN_U12V_ON    3

// CN_UC2
#define PIN_STATUS_LED 13
#define PIN_LCDBTN_CHM 12
#define PIN_LCDBTN_CHP 11
#define PIN_LCDBTN_MNU 10

// LattePanda ACPI State Pins
#define PIN_LP_ACPI_S4 1
#define PIN_LP_ACPI_S0 0
#define PIN_LP_ACPI_S3 7
#define PIN_LP_ACPI_S5 8

#define LED_S3_FLASHING_RATE 2000
#define LED_BRIGHTNESS 6

#define PWRSTATE_DONTKNOW    -1
#define PWRSTATE_OFF         0
#define PWRSTATE_POWERING    1
#define PWRSTATE_SLEEPING    2
#define PWRSTATE_HIBERNATING 3

byte POWER_STATE;
unsigned long LED_LAST_UPDATE = 1;
bool LED_BLINK_STATE = false;

void setup() {
  POWER_STATE = PWRSTATE_DONTKNOW;

  pinMode(PIN_LCDBTN_SRC, OUTPUT);
  pinMode(PIN_LCDBTN_PWR, OUTPUT);
  pinMode(PIN_RESERVED, OUTPUT);
  pinMode(PIN_U12V_ON, OUTPUT);
  pinMode(PIN_STATUS_LED, OUTPUT);
  pinMode(PIN_LCDBTN_CHM, OUTPUT);
  pinMode(PIN_LCDBTN_CHP, OUTPUT);
  pinMode(PIN_LCDBTN_MNU, OUTPUT);

  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(PIN_LP_ACPI_S4, INPUT);
  pinMode(PIN_LP_ACPI_S0, INPUT);
  pinMode(PIN_LP_ACPI_S3, INPUT);
  pinMode(PIN_LP_ACPI_S5, INPUT);

  digitalWrite(PIN_LCDBTN_SRC, LOW);
  digitalWrite(PIN_LCDBTN_PWR, LOW);
  digitalWrite(PIN_RESERVED, LOW);
  digitalWrite(PIN_U12V_ON, LOW);
  digitalWrite(PIN_STATUS_LED, LOW);
  digitalWrite(PIN_LCDBTN_CHM, LOW);
  digitalWrite(PIN_LCDBTN_CHP, LOW);
  digitalWrite(PIN_LCDBTN_MNU, LOW);

  Serial.begin(9600);

  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  power_state_processing();
  led_processing();
  button_processing();
}

void power_state_processing()
{
  if (digitalRead(PIN_LP_ACPI_S5) == HIGH && digitalRead(PIN_LP_ACPI_S4) == HIGH && digitalRead(PIN_LP_ACPI_S3) == HIGH)
  {
    // LattePanda is running. Turn on LCD and fan.

    if (digitalRead(PIN_U12V_ON) != HIGH)
      digitalWrite(PIN_U12V_ON, HIGH);

    POWER_STATE = PWRSTATE_POWERING;

    return;
  }

  // It's not powered on if here. Turn off LCD and fan.

  if (digitalRead(PIN_U12V_ON) != LOW)
    digitalWrite(PIN_U12V_ON, LOW);

  // So, what state is it in?

  if (digitalRead(PIN_LP_ACPI_S3) == LOW && digitalRead(PIN_LP_ACPI_S4) == HIGH)
  {
    POWER_STATE = PWRSTATE_SLEEPING;
    return;
  }

  if (digitalRead(PIN_LP_ACPI_S3) == LOW && digitalRead(PIN_LP_ACPI_S4) == LOW)
  {
    POWER_STATE = PWRSTATE_HIBERNATING;
    return;
  }

  POWER_STATE = PWRSTATE_OFF;
}

void led_processing()
{
  if (POWER_STATE == PWRSTATE_POWERING)
  {
    if (LED_LAST_UPDATE == 0)
      return;

    LED_LAST_UPDATE = 0;
    analogWrite(PIN_STATUS_LED, LED_BRIGHTNESS);

    return;
  }

  if (POWER_STATE == PWRSTATE_SLEEPING)
  {
    if (LED_LAST_UPDATE == 0)
    {
      digitalWrite(PIN_STATUS_LED, LOW);
      LED_LAST_UPDATE = millis();
      return;
    }

    if (millis() - LED_LAST_UPDATE < LED_S3_FLASHING_RATE)
      return;

    if (LED_BLINK_STATE)
      digitalWrite(PIN_STATUS_LED, LOW);
    else
      analogWrite(PIN_STATUS_LED, LED_BRIGHTNESS);

    LED_BLINK_STATE = !LED_BLINK_STATE;
    LED_LAST_UPDATE = millis();
    return;
  }

  // Power state is either off, hibernating, or unknown if here.

  if (LED_LAST_UPDATE != -1)
    LED_LAST_UPDATE = -1;

  if (digitalRead(PIN_STATUS_LED) != LOW)
    digitalWrite(PIN_STATUS_LED, LOW);
}

void button_processing()
{
  for (;;)
  {
    if (Serial.available() <= 0)
      break;

    byte b = Serial.read();

    switch (b)
    {
      case 'P':
      case 'p':
        push_button(PIN_LCDBTN_PWR);
        Serial.println("POWER");
        break;
      case 'S':
      case 's':
        push_button(PIN_LCDBTN_SRC);
        Serial.println("SOURCE");
        break;
      case 'M':
      case 'm':
        push_button(PIN_LCDBTN_MNU);
        Serial.println("MENU");
        break;
      case '+':
        push_button(PIN_LCDBTN_CHP);
        Serial.println("CH+");
        break;
      case '-':
        push_button(PIN_LCDBTN_CHM);
        Serial.println("CH-");
        break;
      default:
        Serial.println('?');
        break;
    }
  }
}

inline void push_button(uint8_t pin)
{
  unsigned long start;

  start = millis();
  digitalWrite(pin, HIGH);
  while (millis() - start < 100);

  start = millis();
  digitalWrite(pin, LOW);
  while (millis() - start < 200);
}
