# All-In-One Classic

This is a small all-in-one computer using a 3D printed computer case that is based on a timeless design created by a large lifestyle consumer electronics company in Cupertino, CA. It's dimensions are 33cm × 24cm × 24cm (H × W × D) and inside is a fully functional PC that can run modern operating systems and software.

![Top Image](https://user-images.githubusercontent.com/36278767/231877491-cfcacd1b-b4e6-4ed8-a92c-5734d1f76fda.jpg)

I wanted to try creating this after coming across [these STL files by max7th](https://www.thingiverse.com/thing:4424878) on Thingyverse. He deserves a lot of credit for his exceptional 3D modeling skills.

All-In-One Classic uses a 9.7" 2048 × 1536 pixel iPad Retina display for its screen. It has stereo speakers, and features 3x USB-A, 1x USB-C, Gigabit Ethernet, dual-band AC WiFi, Bluetooth  4.2, as well as a 3.5mm combined headphone/microphone jack (CTIA standard). Everything is powered via an external 12V power supply.

I'm happy to report that it is not exceedingly difficult to build this system if you have a minimum amount of experience with these kinds of DIY projects.

## Legal Notice

The contents of this repository were not produced and are not endorsed by Apple, Inc. The contents of this repository come with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law.

Please see the LICENSE file for details.

## Photos of the Completed Build

Click to view larger photos.

[![1681418126564](https://user-images.githubusercontent.com/36278767/231884317-3054fa8e-096e-4bad-8062-2b87ad6ab301.jpg)](https://user-images.githubusercontent.com/36278767/231884508-472cab7d-a2d6-471b-9ce5-069452b34649.jpg)
[![1681418126558](https://user-images.githubusercontent.com/36278767/231884314-b9d71415-5cb8-4600-bd97-085618b5516e.jpg)](https://user-images.githubusercontent.com/36278767/231884503-3467ab93-f950-4831-9cf2-bc038f8f48d4.jpg)

[![1681418126552](https://user-images.githubusercontent.com/36278767/231884323-9ab6248a-660c-451e-9b47-f4fc6c8e92a4.jpg)](https://user-images.githubusercontent.com/36278767/231884500-14e0b022-9b51-4334-b061-6eeccda7e639.jpg)
[![1681418126541](https://user-images.githubusercontent.com/36278767/231884322-ea64e62c-1775-4c63-95bc-729898345af9.jpg)](https://user-images.githubusercontent.com/36278767/231884498-40d999e3-da03-43bf-b954-59deab07514d.jpg)

[Here's a short video of the system running a multimedia presentation](https://vimeo.com/manage/videos/817442710).

## Parts Required

The following is just a general overview. It does not include little things like screws, spacers and mounting inserts for the circuit boards, cable management, etc. The actual list of components depends too much on what *you* want to build.

* 1x: small computer. I recycled the [LattePanda Alpha](https://www.lattepanda.com/) form my previous [eMac experiments](https://github.com/shuuryou/emac) due to its built-in Arduino
  * 1x: film antennas with IPEX-4 connectors for LattePanda's built-in WiFi/BT adapter
  * 1x: NVMe M-Key SSD to avoid installing the OS on LattePanda's EMMC storage
* A keystone system that has panel-mount holders and keystones for 1x RJ45 Ethernet, 3x USB 3.0 A, 1x USB 3.0 C, and 1x 3,5mm TRRS headphone out (I used the Delock keystone system)
* 1x: Fan for cooling, if you want. A [Noctua Noctua NF-A6x25 FLX](https://noctua.at/en/products/fan/nf-a6x25-flx) will work nicely
* 1x: 9.7" LCD and driver board ([AliExpress 1](https://www.aliexpress.com/i/32805959160.html) or [AliExpress 2 "LCD with board"](https://www.aliexpress.com/item/4000751222618.html), or use one of the many other sellers that sell the same thing)
* 1x: Power cable with a DC 1.35 × 3.5mm center positive barrel plug; these can often be found as cheap pre-assembled cables with a USB A plug on the other side that can be cut off
* 1x: Set of speakers that work with the LCD driver board; any 8Ω 2W speakers will work ([AliExpress](https://www.aliexpress.com/item/32817796601.html) &mdash; these are cheap and sound decent, but the connector needs to be swapped)
* 1x: Power switch; any non-latching switch will do
* 1x: power supply with a DC 2.1 × 5.5mm barrel plug, outputting DC 12V 6A (8A or 10A may be better)
* 1x: Socket for 2.1 × 5.5mm barrel plug
* 1x: Small power LED (0805 SMD LEDs with pre-soldered wires work well)
* 1x: 5A 5 × 20mm fast acting cartridge fuse
* A set of pre-assembled JST PH 2.0 4P and JST PH 2.0 2P plugs and sockets with wires (can be found on Amazon, eBay, etc.)
* 1x: short HDMI cable to connect the computer to the display

The total cost can vary widely, so it's hard to write down a specific number. It mainly depends on the desired degree of perfection. This project is essentially like building a prototype for a commercial product, which is somewhat expensive.

My main expenses were the case and the display, but setting money aside, buying the required parts, and waiting for delivery took about a month overall.

## 3D Printing the Case

### Model Files

The following model files are in the repository's `STL` folder. They are licensed under the original author's [Creative Commons - Attribution](https://creativecommons.org/licenses/by/4.0/) license.

| Preview | File Name | Description |
|---------|-----------|-------------|
| ![3D render of body_variation_b.stl](https://user-images.githubusercontent.com/36278767/230729948-3905b1eb-853b-4166-a914-b0377187ca78.png) | `body_variation_b.stl` | Edit of the original `body.stl` with the cutouts for the IEC socket and the large power switch removed. Holes for a DC barrel socket and a non-latching power button can be drilled manually instead. |
| ![3D render of frame_variation_e.stl](https://user-images.githubusercontent.com/36278767/230729949-b2300a02-4081-4cd0-9af0-2d598a8a90be.png) | `frame_variation_e.stl` | Edit of the original `frame.stl` that has the cutouts removed so that it can act as a holder for circuit boards. |
| ![3D render of front_variation_b.stl](https://user-images.githubusercontent.com/36278767/230729951-c33aac5b-582f-4e7d-ac20-229068ae2d07.png) | `front_variation_b.stl` | Edit of the original `front.stl` that has Apple's logo removed (while the design patent for the case probably expired a long time ago, the logo is still a registered trademark). The floppy disk port is also removed and its emergency eject pinhole is reused for a power LED. |
| ![3D render of legs_variation_a.stl](https://user-images.githubusercontent.com/36278767/230729953-6ead198b-dd3c-4465-89b1-1b25aa193790.png) | `legs_variation_a.stl` | Copy of the original `legs.stl` with no changes made. 
| ![3D render of tray.stl](https://user-images.githubusercontent.com/36278767/230729954-02dbc0cc-97d6-4fcb-aa61-5cc1fa47bd77.png) | `tray.stl` | The original `tray.stl`. It is easy to modify the file for your needs, e.g. using Tinkercad, to add cutouts, etc. |
| ![3D render of tray_variation_e.stl](https://user-images.githubusercontent.com/36278767/230729956-dc7bbc3b-0e64-434d-a33e-6203d61f5990.png) | `tray_variation_e.stl` | Modified version of `tray.stl` that has cutouts for six Delock 86760 panel-mount keystone enclosures | Easy |
| | `4424878.zip` | Backup of the original design by Max7th from Thingyverse. |

### Turning the 3D Models into Physical Objects

Unless you have a commercial factory-grade 3D printer at home, creating print at full size will be impossible. I strongly recommend printing the case using SLA. The case can be printed using FDM, but this is very difficult and requires a huge amount of post-processing (sanding, filling, etc.). 

The body's dimensions are a massive 243.81mm (L) × 245mm (W) × 334.22mm (H). Since the case has a carrying handle on the top, it is not possible to split it into multiple parts easily without severely degrading its structural integrity.

#### Printing Services

Here are some companies that have commercial factory-grade 3D printers:

* [FacFox](https://facfox.com): Cost is about $700 for an SLA print of the body, front, and legs with the slowest shipping method. They accept PayPal. Their "SLA Tough Resin" material looks beautiful and needs no post-processing, but production will take a little bit longer than their estimated shipping date. They send automatic order status updates and support tickets are answered during their business hours. They provide photos of the parts before shipping them.
* [JLCPCB](https://jlcpcb.com/3d-printing): Cost is about $400 for an SLA print of everything with the cheapest shipping method. They accept PayPal. Print quality is comparable to FacFox, but they only have standard resins that aren't as heat resistant as FacFox's tough resin. The result, when printed with LEDO 6060 Resin and sanding by the factory, is a beautiful case that needs no post-processing. The estimated shipping date is accurate as well, and JLCPCB's order tracking system works great. If you only want to work with one manufacturer, JLCPCB may be a good choice since they can create the PCB and the case. No photos of the prints are provided before shipping and they did not package the individual parts as carefully as I hoped, so I received a broken part (front), but they accepted the quality complaint immediately and resolved it with a free reprint.
* [IN3DTEC](https://www.in3dtec.com/): The only company I know of that will successfully produce an FDM print. Cost is about $300 with the slowest shipping method. They accept PayPal. Don't expect any miracles; the result is best-effort and you get what you pay for. Still, if you need to save money and are good at post-processing plastics, give it a shot. They also provide photos of the parts before shipping them.

I did not get any special treatment or discount for mentioning these companies. They're all based in China. Make of that what you want. I have no problem with it.

I believe the models for the legs, frame, and tray can be printed by pretty much any 3D printing company, but if you decide to order 3D prints from China, it will probably be a better deal overall to get everything printed there.

#### Order Parameters

| File Name | Method | Material | FDM Infill |
|-----------|--------|----------|------------|
| `body_variation_b.stl` | SLA | Tough Resin | \- |
| `frame_variation_e.stl` | FDM | ABS | 60% |
| `front_variation_b.stl` | SLA | Tough Resin | \- |
| `legs_variation_a.stl` | FDM<br/>SLA | ABS<br/>Tough Resin | 100%<br/>&nbsp; |
| `tray.stl` | FDM | ABS | 40% |
| `tray_variation_e.stl` | FDM | ABS | 40% |

Alternatively, you can just order everything as an SLA print if that turns out to be cheaper overall.

#### Printing Quality

The FacFox SLA 3D prints are flawless and the dimensions are as they should be. Every single detail came out perfectly. The surface is extremely smooth and touching it feels good. If you're happy with a creamy white color and an every so slightly see-through look, you could use the case as-is. Front and body are an exact fit. There is nothing to complain about, but that's to be expected given how much they charge. They also printed some extra legs for the case for free, which is a nice gesture, I guess.

Packaging was excellent. The cardboard box was almost an exact fit and the parts were securely wrapped in bubble wrap. The inside of the body was also filled with packing material.

![FacFox 3D print result](https://user-images.githubusercontent.com/36278767/227614800-1bcd42bd-ba14-45ae-88e0-ccb98a24e81b.jpg)

Note that the frame (variation E) and an earlier revision of the tray in the picture above were printed by a local company with the documented order parameters. Body (variation B), front (variation B) and legs (variation A) were printed by FacFox.

## The LCD and its Driver Board

![Driver Board](https://user-images.githubusercontent.com/36278767/226171165-f31a751f-9510-449d-a2cd-3de96a67f400.jpg)

Inside the box is a 9.7" iPad display, an adapter board for the display's eDP connector, a driver board, and a small auxiliary board with buttons to control an on screen menu rendered by the driver board's Realtek RTD2556(T) chip. It is actually possible to build a small flat panel monitor using only those parts. Just add a case and a power supply.

The LCD itself seems to be taken out of an old iPad and is probably refurbished. There was a bit of little glue residue on mine, but it's no major issue. Mine was in otherwise excellent condition with no dead pixels. The picture quality is amazing for the price.

I bought one kit from a seller called "Wisecoco" and a spare from a seller called "VS DISPLAY". I recommend buying from "VS DISPLAY" though, because while theirs is more expensive, the driver board has better firmware that unlocks a hidden factory menu with extra settings.

The display's native resolution is 2048 × 1536 pixels, but the driver board will happily accept and upscale all standard resolutions. The VS DISPLAY firmware has some advanced settings for forcing a specific aspect ratio.

The driver board contains these connectors:

1. 1\.35 × 3.5mm center positive DC power socket
2. Micro USB socket and expects for DC 5V input (not recommended for use according to seller)
3. Mini HDMI and HDMI inputs, switchable via on-screen menu
4. Stereo speaker output using a 4 pin Molex PicoBlade connector
5. 3\.5mm headphone jack
6. 12 pin Molex PicoBlade connector to hook up the auxiliary button board for controlling the on-screen menu.

### Wiring the Auxiliary Board to the Driver Board

The cable connecting the auxiliary button board to the driver board has **8 wires**.

The Molex PicoBlade connector on the driver board has **12 pins**. I think the four extra pins that go unused are for an optional IR remote.

The Molex PicoBlade connector on the button board has **9 pins**. I don't know what the extra pin is for. It appears to be completely unused.

On the driver board, the cable has to be connected starting from pin 1 (indicated by a △ mark), but on the button board, the cable has to be connected starting from pin 2, with pin 1 (again indicated by a △ mark) **left unoccupied**.

The button board also has one wired up, but unused pin that has 3.3V on it. I suspect that it's for a power LED.

The individual pins on the button board are:

| Pin | Purpose |
|-----|---------|
| 1 | CH- button |
| 2 | CH+ button |
| 3 | MENU button |
| 4 | SOURCE button |
| 5 | POWER button |
| 6 | DC 3.3V |
| 7 | GND |
| 8 | Unused |

Pressing a button on the button board shorts its pin on the connector to GND.

## The Coupling Board

Given the emotional scars from my previous and somewhat frustrating experiences with the [iMac G3](https://github.com/shuuryou/imacg3) and [eMac](https://github.com/shuuryou/emac) projects, I had the following design goals in mind:

* Avoid using jumper wires, because they are unreliable, messy, and ugly
* Have _one_ input that takes power for the *entire* system and provides at least a rudimentary level of protection against over-voltage and incorrect polarity
* Use proper connectors for everything; no messing around with that 2.54mm "DuPont" wire garbage
* Provide the ability to control the buttons of the display's on-screen menu from software
* Turn off all power to the LCD and the fan if the computer is not running (off or sleeping)

This is what I came up with:

![Schematic](https://user-images.githubusercontent.com/36278767/229378044-92b5b4c2-9734-41c0-b609-fc5ea240fc00.png)
![PCB Layout](https://user-images.githubusercontent.com/36278767/229378046-b9fdf9b4-731b-4e66-a116-c3837782cfa5.png)
![Actual PCB](https://user-images.githubusercontent.com/36278767/231604158-3e2c336a-28f6-4090-9690-3ea355b88b0c.jpg)

Power goes in through the `PWRIN` screw terminal. Fuse `F_PROT` protects against too much current draw and a Zener diode `D_PROT` attempts to protect against too high voltage by shorting +12V to GND and causing the fuse to blow.

`LPPWR` has constant power so that LattePanda can react to the power switch, and because this stops LattePanda from running down its CR927 RTC battery in just a few months. Additionally, it keeps the Arduino side of LattePanda running even when the PC side of LattePanda is off, which may be useful for future extensions.

The display power screw terminals (`LCDPWR`) and the fan connector (`FANPWR`) were first switched with a Panasonic AQZ102 solid state relay, but this required switching GND, which caused a funny side-effect: connecting the HDMI cable to the display reestablished a path to GND and so the relay would be bypassed. :unamused:

In PCB revision J, I replaced the AQZ102 with a Letex LT218, which can switch the +12V side instead, and is also substantially cheaper. While the AQZ102 can switch up to 4A loads, the LT218 can only handle 2.5A loads. That's fine though. Even with the most thorough testing I have not been able to make the LCD and fan consume more than 950mA combined.

Control signals from the Arduino come in through two JST PH 2.0 4P connectors, `IN_UC1` and `IN_UC2`. I picked JST PH 2.0 4P, because I had them lying around in my parts bin. The case fan connector uses a standard ATX fan header and the power LED is connected using a JST PH 2.0 2P connector.

You may wish to install a current limiting resistor or some other external type of fan speed control (Noctua supplies plug-and-play resistor wires with their FLX series fans). Otherwise any connected case fan will always run at maximum power.

`LCDCTRL` is a connector for the cable that would normally go to the button board included with the LCD driver board.

[JLCPCB](https://jlcpcb.com/) will manufacture the board without issue. I used EasyEDA to design it and LCSC to select and source the components. The cost is about $60 for 5 boards (MOQ) fully assembled and shipped. You can save money by choosing to get only 2 boards assembled by the factory.

You can find the required files to order the PCB (Gerber, BOM, Pick and Place) in the `PCB` folder.

I don't claim that my schematic or board design is perfect, but it works. Feel free to suggest improvements, especially those that can lower production cost. A version that needs no through-hole components would be ideal.

## Preparing the Case

### Painting

As written above, the FacFox SLA 3D print was flawless. It did not need sanding or any other kind of preparatory work. I used the following to paint it:

* Two coats of [Maston Spray Plastic Primer](https://www.maston.fi/en/front-page/product-information/spray-paints/primer/400522/spray-plastic-primer-400ml)
* Two coats of [Maston ONE Spray Paint](https://www.maston.fi/en/front-page/product-information/spray-paints/one-spray)
* Two coats of [Maston ONE Matt Lacquer](https://www.maston.fi/en/front-page/product-information/spray-paints/one-spray/1100331/spraypaint-one-matt-lacquer-400ml?page=1#products-content)

Each product has a technical data sheet that you should read thoroughly.

One can of primer, two cans of paint, and one can of lacquer were sufficient. I chose RAL 9002 as the color since it sort of matches the color of the MOFII Bean keyboard and mouse, but Maston ONE spray paints are available in a large range of RAL colors.

These spray paints are very beginner-friendly and it is almost impossible to mess up the process if you follow the instructions. [Maston also has a video that explains the basics](https://www.youtube.com/watch?v=wGMz20AmCzY). Work slowly, but not too slow (which results paint runs). Try spray painting a practice object like a cardboard box first to get a feel for it.

While beginner-friendly, the chemicals in these spray paints produce a horrible smell and a fine layer of dust can form on surrounding objects if you are not careful. Cover everything that should not get in contact with the spray paint, work in an extremely well ventilated area (**open your windows or work outside**), wear a mask and put on disposable gloves to protect your body.

I waited one minute between coats and one hour between the different sprays. After the final coating, I left all parts to dry for 48 hours. The result looks great and the smell is completely gone.

### Screws Used to Connect the Parts

The screws I used to mount the tray to the body are 3.5 × 9.5mm PH self-tapping screws. 9.5mm is actually just a tiny bit too long, but I had a box of them in my workshop so I used what I had on hand. Looking back, 3.0 × 9mm or 3.0 × 8mm would have been ideal for consistency &mdash; see below.

The screws I used to connect the body to the frame (bottom two screws at the back) and the body to the front (top two screws on the back) are 3.0 × 25mm PH self-tapping screws. Note that you need a very long screwdriver (200 - 300mm length recommended) for the two screws that connect the body to the front; a normal screwdriver won't reach deep enough inside the screw holes.

## Building the Computer

### Installing the Screen

The LCD appears to be quite fragile, so I ordered a custom tempered glass screen protector for its dimensions for about $15 (the dimensions are 151mm × 200mm, corner radius 0mm), but this isn't strictly required.

To mount the screen to the front, I used double-sided 3M VHB tape. It's not possible to get this directly at the correct size for the LCD, but a small roll of it can be bought pretty much anywhere and is sufficient. The LCD has a small border on all four sides that can be used for taping. Once the tape is attached to the LCD, gently press on the tape and then let it sit for a few hours so it can form a strong bond with the border.

**Do not use a sharp object like a box cutter or scalpel to cut the tape exactly to size while it is already stuck to the display.** If you're not careful you'll cut into the tiny flat cables that run along the top of the LCD. If you damage just one connection, you can throw the display away. Don't ask me how I know. :disappointed: It is okay to have some extra tape going over the top of the LCD frame, because it won't be visible when the case is closed.

The easiest way I found to install the screen was to put the LCD on top of a small box. A Kleenex tissue box would work well for this. Next, remove the protective film from the double-sided tape and then *slowly* lower the front part of the case onto the display so that none of the tape is visible. The front part of the case will fit the LCD exactly and no part of the LCD's border should be visible if it is centered perfectly.

Keep in mind that you may only get one shot at this; once the tape is stuck to the frame, it's done. Trying to remove the display from the front afterwards could damage it.

I put some tape on the back of the LCD to create an isolated area and then put two small pieces of leftover 3M VHB tape on the back of the LCD's driver board to mount it on the back of the LCD.

![LCD front](https://user-images.githubusercontent.com/36278767/229380135-900d30d5-f966-4356-bbe9-e6d24c6fa482.jpg)

![LCD back](https://user-images.githubusercontent.com/36278767/229380137-fa5753e9-4ea9-4245-a1c4-06d15cfea817.jpg)

To mount the display (front of the case) to the frame, I used 30mm M4 screws with matching nuts. 30mm is too long (20mm should be enough), but I had a set of them sitting unused in my workshop.

### Installing the Legs

Strictly speaking, attaching the legs is completely optional, but it does make the final result look a little bit more professional.

The legs don't snap into the bottom of the body, so I used a bit of hot glue to keep them permanently attached. That's working very well so far.

I also added rubber pads to the bottom of them to keep the case from sliding around. Pads with 11mm diameter and 5mm height work well. Just buy one of those 100 piece sets that have various sizes and some of them will most likely be a perfect fit.

### Installing the Speakers

The speakers I ordered from AliExpress had a decent enough sound (for $8 speakers, anyway). Sadly, they had the wrong type of connector, so I cut it off and put on the correct Molex PicoBlade 4 pin connector instead. You can sometimes find these cheaper and mislabled as "Micro JST" on AliExpress, eBay, Amazon, etc. It's a crapshoot though.

Since the speakers had a plastic enclosure, I used some of the leftover 3M VHB tape to attached them to the vents on the left and right side of the case. They fit well and don't obstruct anything either.

### Installing the Coupling Board and LattePanda

I used a pen to mark the holes of the LattePanda board and the coupling board, then I carefully drilled 3mm holes into the frame at those points.

Next, I used a soldering iron to melt M3 sized threaded brass inserts into the frame and used nylon PCB spacers and screws to hold the boards in place. LattePanda is a tight fit, but the coupling board is fairly small, so there is some distance between the two boards.

Once the boards were held in place, it was really just a matter of connecting wires

#### Screw Terminals

* DC 12V positive and negative wires from the DC barrel socket to `PWRIN`
* LattePanda's JST PH 2.0 4P power connector to `LPPWR`
* The cable going to the the DC 1.35 × 3.5mm barrel plug for LCD power to `LCDPWR`
* The case fan's power cable simply attaches to the `FANPWR` fan header

#### Logic Connectors

* The cable that originally went to the remote control of the LCD driver board gets connected to `LCDCTRL`
* `INUC_1` and `INUC_2` get connected to the Arduino side of LattePanda

To use the sketch in this repository without changes, connect as follows:

| Connector | Pin | Used for | Arduino Pin |
|-----------|-----|----------|-------------|
| `INUC_1` | 1 | "Source" LCD button | 6 |
| `INUC_1` | 2 | "Power" LCD button | 5 |
| `INUC_1` | 3 | (Reserved) | 4 |
| `INUC_1` | 4 | Power control for LCD and fan (`U12V`) | 3 |
| `INUC_2` | 1 | Front LED | 13 (use a pin that supports PWM) |
| `INUC_2` | 2 | "CH+" LCD button | 12 |
| `INUC_2` | 3 | "CH-" LCD button | 11 |
| `INUC_2` | 4 | "Menu" LCD button | 10 |

You also need to connect these pins from LattePanda's PC side to LattePanda's Arduino side:

| PC Pin | Arduino Pin |
|--------|-------------|
|S0|0|
|S4|1|
|S3|7|
|S5|8|

See LattePanda's pinout below:

![LattePanda Alpha pinout](https://user-images.githubusercontent.com/36278767/231715991-adb58031-16ff-422e-95d9-aaab5c67e988.png)

#### Front LED, Power Switch, and Antennas

The front LED should be soldered onto a JST PH 2.0 2P connector, which then connects to `FLED` on the coupling board. 5V DC power for driving the LED is supplied by Arduino directly, but there's a 360 Ω LED resistor on the coupling board (`R7`) to limit current draw.

The rear power switch should be soldered so that it shorts the pins of a JST PH 2.0 2P connector, which is then connected to LattePanda's `SW` input.

The final result may look like in the image below. You can also see the WiFi and BT film antennas attached below the display. Reception is excellent.

![Coupling Board and LattePanda installed](https://user-images.githubusercontent.com/36278767/231600665-53f33996-1d3c-4250-9ff2-e63ac0cbee23.jpg)

### Installing the LED, Ports, and Case Fan

I decided it would be better not to have part-specific cutouts in the STL files, because that ties the project to specific components and makes it difficult to use things laying around in a spare parts bin. Have a drill with an assortment of drill bits ready. A rotary tool also helps.

#### LED

A 5V 0805 SMD LED will fit into the small hole on the front part and can be held in place there with a small amount of glue or a piece of tape. Good places to find these LEDs locally are shops catering to people who like building model railroads.

I enlarged the hole with a 2mm drill bit by just a tiny amount (not all the way through to the other side), so the LED could be flush mounted. I then used black automotive wiring tape to make it stay in place.

Depending on how bright the LED is and what color of paint was used on the case, it might produce a large glowing ring. In that case, consider using black masking tape or electrical tape to confine the LED's light to the hole. 

#### Ports

I drilled holes for the power switch and DC barrel socket. Drilling into the resin material is not difficult and goes about very smoothly. The drill dust is a very fine powder and easily vacuumed away. It's probably best not to breathe it though.

To use the Delock keystone system with `tray_variation_e.stl` for standard ports like USB and Ethernet, I had to use a rotary tool carefully to remove the plastic tabs at the top and bottom of the Delock 86760 panel-mount keystone enclosures, shown in the image below. If this is not done, the enclosures will not fit.

![Delock 86760 plastic tabs](https://user-images.githubusercontent.com/36278767/230718480-0466e216-a13d-437c-a794-d8c4190941b6.png)

I originally attempted to fit seven enclosures, but that's just a tiny bit too tight for each individual enclosure, as shown below, so I updated the model to have space for only six of them instead. As you can see below, the keystone enclosures are a bit cramped.

![Seven enclosures](https://user-images.githubusercontent.com/36278767/230722557-996e53fe-378d-4d5a-8213-6a37d0193904.jpg)

Still, it looks fairly tidy from the outside and once the keystone modules are installed inside the enclosures, nothing else is needed to keep everything secured in place.

Once the keystone modules are installed, it's really just a matter of connecting the cables to LattePanda. Everything will start working immediately once connected.

Note that For the three USB 3.0 Type A connectors on LattePanda, you'll need to find cables that have a very slim USB plug or are angled 90° upwards, because otherwise they get in the way of the front part of the case, making installation impossible.

#### Case Fan

It's not strictly necessary to install a case fan, but LattePanda runs a bit hot under heavy load even with its own CPU fan at full speed, so I thought some additional airflow wouldn't hurt.

The Noctua fan referenced in the parts list fits inside the ventilation area on the back of the case. I used a piece of replacement lead for a mechanical pencil to mark the fan's holes for drilling since normal pencils and pens were too thick.

I had to drill four 4mm holes. I started with a 2mm drill bit, then went with 3mm, and finally 4mm. The fan's included rubber mounts admittedly look a bit funny, but were easily installed and prevent vibration. The included screws would probably have worked just as well.

The FLX version of the Noctua fan comes with two resistors (they call them "Low Noise Adaptor" and "Ultra Low Noise Adaptor") to quiet it down. This is useful, because the coupling board has no means to control fan speed. With the ultra low noise adapter, the fan is practically silent while sitll providing good airflow.

![Back view](https://user-images.githubusercontent.com/36278767/230723189-04289f90-70bf-4b4b-bcf0-06d82c16b132.jpg)

### Arduino Sketch Notes

Simply open the sketch from the `sketch` folder in this Repository in the Arduino IDE and upload it to the micro controller. The sketch doesn't need any extra libraries, and unlike the iMac G3 and eMac projects, it doesn't touch the EEPROM.

If you need to change the pin numbers, edit the `#define` statements to suit your needs. Easy.

You can also change the LED flash rate when LattePanda is sleeping by editing `LED_S3_FLASHING_RATE` (value is in milliseconds). `LED_BRIGHTNESS` controls the brightness of the front LED using PWM. Be sure the LED is connected to a pin that supports PWM or it will act weird.

There are only about 180 lines of code in three methods:

The `power_state_processing` method checks whether LattePanda is running (ACPI S0 state), sleeping (ACPI S3 state), hibernating (ACPI S4 state), or off (ACPI S5 state). It also controls LCD and fan power: when LattePanda is running, it makes `PIN_U12V_ON` go high, causing the LCD and case fan get power and turn on. If LattePanda is hibernating or off, it makes `PIN_U12V_ON` go low, causing the LCD and case fan to lose power and turn off.

The `led_processing` method takes LattePanda's current power state and controls the front LED: when LattePanda is running, it is on constantly; when LattePanda is sleeping, the LED flashes; and when LattePanda is hibernating or off, the LED is off. This is the place to put additional code for cool LED fade effects, etc.

The `button_processing` method reads a character from the serial port and interacts with the LCD driver board's on-screen menu by pressing buttons virtually; i.e. pulling the respective data lines on the `LCDCTRL` connector low for 100ms (see `push_button` helper method).

You can send these characters to the serial port to initiate button presses and get a response:

|Input|Button|Output|
|---------|------|--------|
|`P` or `p`|Power|`POWER`|
|`S` or `s`|Source|`SOURCE`|
|`M` or `m`|Menu|`MENU`|
|`+`|CH+|`CH+`|
|`-`|CH-|`CH-`|
|Anything else| (None) |`?`|

**NOTE:** Do not include a carriage return (CR) or newline (LF) character when communicating via the serial port.

[Here's a short video showing a test of the serial communication](https://vimeo.com/manage/videos/816704722).

#### Power Button Warning
Triggering the power button will turn off the display via its driver board. The driver board remembers its power state, so even a reboot or power cycle will not cause the display to come back to life. The only way to turn on the display again is by triggering the power button a second time. Please keep this in mind in case you have no network or remote access set up.

If you have accidentally turned off the display and no way to issue serial port commands, you have two options:
* Reconnect the auxiliary button board that was shipped with the display driver board and push its power button
* Connect an external display to LattePanda's USB-C port and use that to control the computer so it can issue the serial command for triggering the power button.


