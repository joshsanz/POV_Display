Arduino Based Persistence of Vision Display
================================

##Meghan Jimenez and Josh Sanz
###Built for E190p Embedded Systems

#### Introduction
The goal of this project is to create a persistence of vision (POV) display, that is, a display that relies on the latency of human vision to create more interesting images than a static display can deliver. The inspiration for this project comes from the art piece Full Turn. This piece takes two LCD screens placed back-to-back and spins them at high speeds. Since this piece utilizes POV and the resolution of these displays is high, very interesting and complex shapes can be displayed. The images created can even look three dimensional.

Since Full Turn is an art piece rather than an engineering project, finding technical specifications on the display proved impossible and the expense of using two large LCD screens is difficult to surmount for someone who just wants to tinker. We created this tutorial to explain how to make a POV display similar to Full Turn with technical specifications and without the high cost.

#### Materials
Here is a list of items that we used for this project:

Item | Cost | Supplier | Link
---- | ---- | -------- | ---- 
Arduino DUE* | $50 | Adafruit | http://www.adafruit.com/products/1076 
LED array | $40 now, $75 when we bought it | Adafruit | http://www.adafruit.com/products/1484 
6-wire slip ring | $17.50 | Adafruit | http://www.adafruit.com/products/736 
Power supply (19 V, 3.3A) | $8.00 | Amazon | http://www.amazon.com/Laptop-Notebook-Adapter-Supply-Aspire/dp/B004FLR2EW/ref=sr_1_2?ie=UTF8&qid=1393394428&sr=8-2&keywords=laptop+power+supply 
Motor (RS-385SH Mabuchi)* | -- | Stockroom | -- 
Photoresistor | $1.50 | Sparkfun | https://www.sparkfun.com/products/9088 

*We don’t necessarily recommend all of these items! It works with this setup, but there are a few things that we would change given the chance, so don’t go buying everything yet!

In addition to the pieces listed above we also used various odds and ends from our stockroom and machine shop:
	*LM317 adjustable voltage regulators
	*1K potentiometer
	*Wire
	*Scrap wood
	*Scrap sheet metal
	*Wood screws
	*Epoxy
	*Hand drill/drill press
	*Jointer
	*Mill
	*Bandsaw
	*Sheet metal bender

The first thing to note is that this project might work just as well with an Arduino Uno. 
The DUE’s advantage is a faster clock speed and more pins if you want to connect other devices to the 
same board. From reviews that we read on Sparkfun, 16 MHz seems to be the minimum clock speed
 required to drive the LEDs which is exactly what the Uno runs at. We had a DUE on hand, so we used that. 
 We also tried this with a Raspberry Pi and found that the timing was not precise enough for use with this
 array. Unless you want to put in significant work to try to make the timing better, we suggest not using a 
 Raspberry Pi for this project.

Second, we had some issues with our motor choice. We tried several different motors before deciding 
that they were all far too small to drive our final frame. The motor listed in the table above works but it also
 gets hot and cannot run for too long. We had similar issues with the voltage regulators - this array pulls 
 a lot of power and even with a large heat sink attached, the regulators began to heat up very quickly. We 
 would recommend using a larger motor and better voltage regulators if possible.

Finally, remember that using these items was the easiest way for us to go about completing this 
project but there are definitely alternatives if you don’t have access to all of these things!

####Methods

1. _Using the LED Array_
	The LED array contains 32*32*3=3072 separate LEDs. This is way too many to drive all at once, so it uses
	12 LED drivers, each capable of controlling 16 LEDs at once, for a total of 192 LEDs driven at a time - 
	exactly enough for two rows of the display. Four address bits are used to control which pair of rows is being
	driven at any given time. 
	The LED drivers take in a clock signal, which is used to clock in the 32 columns of each row (the two 
	signals for each rgb color account for the total of 192 LEDs). After an entire row has been clocked in,
	the display is disabled, a latch signal is toggled on and off again, and the row address is set. The display
	is then enabled and the chosen row of LEDs is driven. In order to give the impression of an entire display
	being on, the rows are cycled through very quickly, hence the minimum processor clock speed of 16 MHz. 
	Sample code can be found in our github repo, or 
	[here](http://www.google.com/url?q=http%3A%2F%2Fwww.rayslogic.com%2Fpropeller%2FProgramming%2FAdafruitRGB%2FAdafruitRGB.htm&sa=D&sntz=1&usg=AFQjCNGaue4Mzry9ocuIhO-xa-Fn3XG1CQ). The Adafruit website has instructions for wiring the display to an Arduino [here](http://www.google.com/url?q=http%3A%2F%2Flearn.adafruit.com%2F32x16-32x32-rgb-led-matrix%3Fview%3Dall&sa=D&sntz=1&usg=AFQjCNGtINYJXx6uQs6b5SaGDnDzgOfYKw).
2. _Building the Frame_
	The first step to building the frame is finding a way to stabilize the LED array. We chose to do this by 
	milling slots that are the width of the array down the center of two pieces of wood cut to the same length
	as the array. We then epoxied the top of the array into one piece of wood and the bottom into the other 
	(Figure 1). The slotted piece of wood that is epoxied to the top of the array should also have a hole dead
	center that is slightly larger than the shaft of the motor that you plan to use. Be careful to place the hole
	in the center of the piece of wood at the center of the array as well! Once both pieces are attached, really
	try to make sure that your LED array is vertically straight! You can fix it later (like we did), but it’s easier if 
	you get it right the first time.
	![Array epoxied into a piece of wood for increased stability. A second piece of wood was later epoxied to the top of the array.]
	
	![frame](https://github.com/joshsanz/POV_Display/blob/master/pictures/assembled%20frame_alt.jpg?raw=true)



















