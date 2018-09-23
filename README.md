# Saitek Switch Panel Arduino Pro Micro Replacement

The Saitek pro flight panels were awesome. I bought all of them years ago and they worked great... with Windows 7 and USB 2. Unfortunately when I upgraded my computer everything stopped working and the panels became useless. I have followed every guide, every driver, every bios setting I can think of and I can't get any of the panels to function. I've even reinstalled the os several times trying to fix it. Now that Logitech has bought Saitek these things are basically bricks with no support. I really want my simulator to work again so I set off to figure out how to fix this.

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
