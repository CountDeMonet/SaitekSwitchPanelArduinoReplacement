# Saitek Switch Panel Arduino Pro Micro Replacement

The Saitek Pro Flight Panels were awesome. I bought all of them years ago and they worked great… with Windows 7 and USB 2. Unfortunately when I upgraded my computer everything stopped working due to Windows 10 and all USB3 ports. I have followed every guide, every driver, every bios setting I could find and I can’t get any of the panels to function. I’ve been able to get the radio panel and multi panel working with Spad.NEXT but the switch panel refuses to function. I can only assume something on the circuit board has gone bad.  Now that Logitech has bought Saitek this thing is basically a brick with no support. Really without Spad.NEXT all three would be bricks as the Logitech software does not work at all. I really want my simulator to work again so I set off to figure out how to fix switch panel.

I looked into how to use an arduino as a HID device and I found that the Leonardo has built in HID capabilities. I picked up a couple of Pro Micro clones from amazon and went to work.

![boards](https://raw.githubusercontent.com/CountDeMonet/SaitekSwitchPanelArduinoReplacement/master/board_comp.jpg)

First step is to open up the switch panel and remove all wiring. The main and light switches are simple switches, the gear lever is a 2 position switch, and the magneto is a 5 position switch. 

![cleaned](https://raw.githubusercontent.com/CountDeMonet/SaitekSwitchPanelArduinoReplacement/master/all_cleaned_up.jpg)

This makes for 20 io points needed. Two more than the pro micro has. Luckily the gear lever only needs 1 of the 2 positions to be connected to act like a standard switch. That left one missing input so I didn't connect the cowl flap switch. Every other switch works. The LED's on the landing gear also had to go.

![wired](https://raw.githubusercontent.com/CountDeMonet/SaitekSwitchPanelArduinoReplacement/master/all_wired_up.jpg)


This was a really quick hack but it got 95% of the functionality of the switch panel back and I no longer have to worry about Saitek screwing things up.

I have also included my Standard.xml which goes in C:\Users\{username}\AppData\Roaming\Microsoft\FSX\Controls. Modifying this file allowed me to connect to the beacon, nav, strobe, taxi, and recognition light switches in the sim. I do over write a number of keyboard shortcuts to make this work.

This uses the switch panel as a standard keyboard so be careful flipping switches when not in FSX. I start my flights with the planes completely cold so setup a default flight configuration for that or make sure the switches are set match your initial plane configuration when starting the simulator.

There are some annoying things about this but it does work well. Here is a youtube video showing how well it works

[![IMAGE ALT TEXT](http://img.youtube.com/vi/NsAlKy_XCAE/0.jpg)](https://www.youtube.com/watch?v=NsAlKy_XCAE "Fixing Saitek Proflight Switch Panel with Arduino")
