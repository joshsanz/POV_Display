Arduino Based Persistence of Vision Display
================================

##Meghan Jimenez and Josh Sanz
###Built for E190p Embedded Systems

#### Introduction
The goal of this project is to create a persistence of vision (POV) display, that is, a display that relies on the latency of human vision to create more interesting images than a static display can deliver. The inspiration for this project comes from the art piece Full Turn. This piece takes two LCD screens placed back-to-back and spins them at high speeds. Since this piece utilizes POV and the resolution of these displays is high, very interesting and complex shapes can be displayed. The images created can even look three dimensional.

Since Full Turn is an art piece rather than an engineering project, finding technical specifications on the display proved impossible and the expense of using two large LCD screens is difficult to surmount for someone who just wants to tinker. We created this tutorial to explain how to make a POV display similar to Full Turn with technical specifications and without the high cost.

#### Materials
Here is a list of items that we used for this project:
| Item | Cost | Supplier | Link |
| Arduino DUE* | $50 | Adafruit | http://www.adafruit.com/products/1076 |
| LED array | $40 now, $75 when we bought it | Adafruit | http://www.adafruit.com/products/1484 |
| 6-wire slip ring | $17.50 | Adafruit | http://www.adafruit.com/products/736 |
| Power supply (19 V, 3.3A) | $8.00 | Amazon | http://www.amazon.com/Laptop-Notebook-Adapter-Supply-Aspire/dp/B004FLR2EW/ref=sr_1_2?ie=UTF8&qid=1393394428&sr=8-2&keywords=laptop+power+supply |
| Motor (RS-385SH Mabuchi)* | -- | Stockroom | -- |
| Photoresistor | $1.50 | Sparkfun | https://www.sparkfun.com/products/9088 |

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

The first thing to note is that this project might work just as well with an Arduino Uno. The DUE’s advantage is a faster clock speed and more pins if you want to connect other devices to the same board. From reviews that we read on Sparkfun, 16 MHz seems to be the minimum clock speed required to drive the LEDs which is exactly what the Uno runs at. We had a DUE on hand, so we used that. We also tried this with a Raspberry Pi and found that the timing was not precise enough for use with this array. Unless you want to put in significant work to try to make the timing better, we suggest not using a Raspberry Pi for this project.

Second, we had some issues with our motor choice. We tried several different motors before deciding that they were all far too small to drive our final frame. The motor listed in the table above works but it also gets hot and cannot run for too long. We had similar issues with the voltage regulators - this array pulls a lot of power and even with a large heat sink attached, the regulators began to heat up very quickly. We would recommend using a larger motor and better voltage regulators if possible.

Finally, remember that using these items was the easiest way for us to go about completing this project but there are definitely alternatives if you don’t have access to all of these things!

####Methods
