/*
Josh Sanz and Meghan Jimenez
E190p Embedded Systems
Persistence of Vision Display Arduino Code
Feb. 25, 2014
*/

// Define pin numbers for the various signals to send to the display
// these control the rgb outputs for the leds
const int r1 = 52;
const int r2 = 50;
const int g1 = 51;
const int g2 = 53;
const int b1 = 49;
const int b2 = 48;
// these are controls (address, clock and latch, and output enable)
const int A = 47;
const int B = 46;
const int C = 45;
const int D = 44;
const int CLK = 43;
const int OE = 42;
const int LAT = 41;
// counter for which pair of rows to drive
int i = 0;

/* sets the address pins based on which pair of rows we want to drive */
void setAddress(int i) {
  if (i == 0) {
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (i == 1) {
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (i == 2) {
    digitalWrite(A, 0);
    digitalWrite(B, 1);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (i == 3) {
    digitalWrite(A, 1);
    digitalWrite(B, 1);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (i == 4) {
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (i == 5) {
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (i == 6) {
    digitalWrite(A, 0);
    digitalWrite(B, 1);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (i == 7) {
    digitalWrite(A, 1);
    digitalWrite(B, 1);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (i == 8) {
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 1);
  } else if (i == 9) {
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 1);
  } else if (i == 10) {
    digitalWrite(A, 0);
    digitalWrite(B, 1);
    digitalWrite(C, 0);
    digitalWrite(D, 1);
  } else if (i == 11) {
    digitalWrite(A, 1);
    digitalWrite(B, 1);
    digitalWrite(C, 0);
    digitalWrite(D, 1);
  } else if (i == 12) {
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 1);
    digitalWrite(D, 1);
  } else if (i == 13) {
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 1);
    digitalWrite(D, 1);
  } else if (i == 14) {
    digitalWrite(A, 0);
    digitalWrite(B, 1);
    digitalWrite(C, 1);
    digitalWrite(D, 1);
  } else {
    digitalWrite(A, 1);
    digitalWrite(B, 1);
    digitalWrite(C, 1);
    digitalWrite(D, 1);
  }
}

/* logic for small heart */
void heart1(int i, int j) {
  if (i == 11 && j > 6 && j < 12) { 
  // determines whether to write a pin high based on position
    digitalWrite(r1, 1);
  } else if (i == 11 && j > 16 && j < 22) {
    digitalWrite(r1, 1);
  } else if (i == 12 && j > 5 && j < 14) {
    digitalWrite(r1, 1);
  } else if (i == 12 && j > 14 && j < 23) {
    digitalWrite(r1, 1);
  } else if (i == 13 && j > 4 && j < 24) {
    digitalWrite(r1, 1);
  } else if (i == 14 && j > 4 && j < 24) {
    digitalWrite(r1, 1);
  } else if (i == 15 && j > 4 && j < 24) {
    digitalWrite(r1, 1);
  } else if (i == 0 && j > 5 && j < 23) {
    digitalWrite(r2, 1);
  } else if (i == 1 && j > 7 && j < 21) {
    digitalWrite(r2, 1);
  } else if (i == 2 && j > 9 && j < 19) {
    digitalWrite(r2, 1);
  } else if (i == 3 && j > 11 && j < 17) {
    digitalWrite(r2, 1);
  } else if (i == 4 && j > 12 && j < 16) {
    digitalWrite(r2, 1);
  } else if (i == 5 && j == 14) {
    digitalWrite(r2, 1);
  } else {
    digitalWrite(r1, 0);
    digitalWrite(r2, 0);
  }
}

<<<<<<< HEAD
void setAddress(int i) {
if(i==0) {
digitalWrite(A,0);
digitalWrite(B,0);
digitalWrite(C,0);
digitalWrite(D,0);
} else if(i==1) {
digitalWrite(A,1);
digitalWrite(B,0);
digitalWrite(C,0);
digitalWrite(D,0);
}else if(i==2) {
digitalWrite(A,0);
digitalWrite(B,1);
digitalWrite(C,0);
digitalWrite(D,0);
}else if(i==3) {
digitalWrite(A,1);
digitalWrite(B,1);
digitalWrite(C,0);
digitalWrite(D,0);
}else if(i==4) {
digitalWrite(A,0);
digitalWrite(B,0);
digitalWrite(C,1);
digitalWrite(D,0);
}else if(i==5) {
  //Serial.println("i=5");
digitalWrite(A,1);
digitalWrite(B,0);
digitalWrite(C,1);
digitalWrite(D,0);
}else if(i==6) {
digitalWrite(A,0);
digitalWrite(B,1);
digitalWrite(C,1);
digitalWrite(D,0);
}else if(i==7) {
digitalWrite(A,1);
digitalWrite(B,1);
digitalWrite(C,1);
digitalWrite(D,0);
}else if(i==8) {
digitalWrite(A,0);
digitalWrite(B,0);
digitalWrite(C,0);
digitalWrite(D,1);
}else if(i==9) {
digitalWrite(A,1);
digitalWrite(B,0);
digitalWrite(C,0);
digitalWrite(D,1);
}else if(i==10) {
digitalWrite(A,0);
digitalWrite(B,1);
digitalWrite(C,0);
digitalWrite(D,1);
}else if(i==11) {
  //Serial.println("i=11");
digitalWrite(A,1);
digitalWrite(B,1);
digitalWrite(C,0);
digitalWrite(D,1);
}else if(i==12) {
digitalWrite(A,0);
digitalWrite(B,0);
digitalWrite(C,1);
digitalWrite(D,1);
}else if(i==13) {
digitalWrite(A,1);
digitalWrite(B,0);
digitalWrite(C,1);
digitalWrite(D,1);
}else if(i==14) {
digitalWrite(A,0);
digitalWrite(B,1);
digitalWrite(C,1);
digitalWrite(D,1);
}else{
digitalWrite(A,1);
digitalWrite(B,1);
digitalWrite(C,1);
digitalWrite(D,1);
=======
/* logic for medium heart */
void heart2(int i, int j) {
  if (i == 10 && j > 5 && j < 13) {
    digitalWrite(r1, 1);
  } else if (i == 10 && j > 17 && j < 25) {
    digitalWrite(r1, 1);
  } else if (i == 11 && j > 3 && j < 15) {
    digitalWrite(r1, 1);
  } else if (i == 11 && j > 15 && j < 27) {
    digitalWrite(r1, 1);
  } else if (i == 12 && j > 2 && j < 28) {
    digitalWrite(r1, 1);
  } else if (i == 13 && j > 2 && j < 28) {
    digitalWrite(r1, 1);
  } else if (i == 14 && j > 2 && j < 28) {
    digitalWrite(r1, 1);
  } else if (i == 15 && j > 2 && j < 28) {
    digitalWrite(r1, 1);
  } else if (i == 0 && j > 2 && j < 28) {
    digitalWrite(r2, 1);
  } else if (i == 1 && j > 3 && j <27 ) {
    digitalWrite(r2, 1);
  } else if (i == 2 && j > 5 && j < 25) {
    digitalWrite(r2, 1);
  } else if (i == 3 && j > 7 && j < 23) {
    digitalWrite(r2, 1);
  } else if (i == 4 && j > 9 && j < 21) {
    digitalWrite(r2, 1);
  } else if (i == 5 && j > 11 && j < 19) {
    digitalWrite(r2, 1);
  } else if (i == 6 && j > 13 && j < 17) {
    digitalWrite(r2, 1);
  } else if (i == 7 && j == 15) {
    digitalWrite(r2, 1);
  } else {
    digitalWrite(r1, 0);
    digitalWrite(r2, 0);
  }
>>>>>>> origin/Hearts-Display
}

/* logic for largest heart */
void heart3(int i, int j) {
  if (i == 8 && j > 5 && j < 11) {
    digitalWrite(r1,1);
  } else if (i == 8 && j > 19 && j < 25) {
    digitalWrite(r1,1);
  } else if (i == 9 && j > 2 && j < 14) {
    digitalWrite(r1, 1);
  } else if (i == 9 && j > 16 && j < 28) {
    digitalWrite(r1, 1);
  } else if (i == 10 && j > 0 && j < 15) {
    digitalWrite(r1, 1);
  } else if (i == 10 && j > 15 && j < 30) {
    digitalWrite(r1, 1);
  } else if (i == 11 && j < 31) {
    digitalWrite(r1, 1);
  } else if (i == 12 && j < 31) {
    digitalWrite(r1, 1);
  } else if (i == 13 && j < 31) {
    digitalWrite(r1, 1);
  } else if (i == 14 && j < 31) {
    digitalWrite(r1, 1);
  } else if (i == 15 && j < 31) {
    digitalWrite(r1, 1);
  } else if (i == 0 && j > 0 && j < 30) {
    digitalWrite(r2, 1);
  } else if (i == 1 && j > 2 && j <28 ) {
    digitalWrite(r2, 1);
  } else if (i == 2 && j > 4 && j < 26) {
    digitalWrite(r2, 1);
  } else if (i == 3 && j > 6 && j < 24) {
    digitalWrite(r2, 1);
  } else if (i == 4 && j > 8 && j < 22) {
    digitalWrite(r2, 1);
  } else if (i == 5 && j > 10 && j <20) {
    digitalWrite(r2, 1);
  } else if (i == 6 && j > 12 && j < 18) {
    digitalWrite(r2, 1);
  } else if (i == 7 && j > 13 && j < 17) {
    digitalWrite(r2, 1);
  } else if (i == 8 && j == 15) {
    digitalWrite(r2, 1);
  } else {
    digitalWrite(r1, 0);
    digitalWrite(r2, 0);
  }
}

/* 	declares the necessary pins as outputs, starts a serial connection
	for debugging purposes */
void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(OE, OUTPUT);
  pinMode(LAT, OUTPUT);
  pinMode(CLK, OUTPUT);
  //Serial.begin(9600);
}

/* main loop which drives the display and reads in light values */
void loop() {
  int j;
<<<<<<< HEAD
  for(j=0;j<32;j++) {
	digitalWrite(r1,0);
	digitalWrite(r2,0);
	digitalWrite(g1,1);
	digitalWrite(g2,1);
	digitalWrite(b1,0);
	digitalWrite(b2,0);
	//delayMicroseconds(10);
	if(i==10 && j==10) {
                //Serial.println("white");
		digitalWrite(r1,1);
		digitalWrite(r2,1);
		digitalWrite(g1,0);
		digitalWrite(g2,0);
		digitalWrite(b1,0);
		digitalWrite(b2,0);
		//delayMicroseconds(1);
	}
	digitalWrite(CLK,1);
	//delayMicroseconds(10);
	digitalWrite(CLK,0);
}
digitalWrite(OE,1);
//delayMicroseconds(10);
digitalWrite(LAT,1);
//delayMicroseconds(10);
digitalWrite(LAT,0);
//digitalWrite(A,1);
//digitalWrite(B,0);
//digitalWrite(C,1);
//digitalWrite(D,0);
setAddress(i);
//delayMicroseconds(10);
digitalWrite(OE,0);
++i;
if(i==16) i=0;
//delay(500);
=======
  int light;
  // read in value from photo resistor/voltage divider circuit
  light = analogRead(8);
  // increase range just to make math easier
  light = light*4;
  //Serial.println(light);
  // drive green and blue low to start row (might not be necessary --TODO)
  digitalWrite(g1, 0);
  digitalWrite(g2, 0);
  digitalWrite(b1, 0);
  digitalWrite(b2, 0);
  // loop to clk in all LED values in a row
  for (j = 0; j < 32; j++) {
	// check light levels to determine which heart to display
    if(light < 800){
      digitalWrite(r1,0);
      digitalWrite(r2,0);
    } else if(light<1500) {
      heart1(i,j);
    } else if(light<3000) {
      heart2(i,j);
    } else {
      heart3(i,j);
    }
	// add green and blue bands at edges of matrix for visual effect
    if (j==0) {
      digitalWrite(g1,1);
      digitalWrite(b2,1);
    } else if(j==31){
      digitalWrite(g2,1);
      digitalWrite(b1,1);
    } else {
      digitalWrite(g2,0);
      digitalWrite(b2,0);
      digitalWrite(g1,0);
      digitalWrite(b1,0);
    }
	// clock in the values for column j
    digitalWrite(CLK, 1);
    digitalWrite(CLK, 0);
  }
  // turn off display while we update the address and latch in the row
  digitalWrite(OE, 1);
  // latch row
  digitalWrite(LAT, 1);
  digitalWrite(LAT, 0);
  // update address (which pair of rows)
  setAddress(i);
  // re-enable screen
  digitalWrite(OE, 0);
  // increment row, loop ends at 15
  ++i;
  if (i == 16) i = 0;
>>>>>>> origin/Hearts-Display
}

/* 	We tried implementing lookup tables for the display logic, but they were too slow
	Instead we used if/else if statements to fill in solid hearts and they are much 
	faster */
/*const int Heart1[] = { // the outlines of the hearts to display
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,1,1,0,0,0,0,1,1,0,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,
0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,
0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

const int Heart2[] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
0,0,0,0,1,1,1,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,0,
0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};


const int Heart3[] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,
0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,
1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,
0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,
0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
*/
