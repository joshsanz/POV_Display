const int r1 = 52;
const int r2 = 50;
const int g1 = 53;
const int g2 = 51;
const int b1 = 49;
const int b2 = 48;
// controls
const int A = 47;
const int B = 46;
const int C = 45;
const int D = 44;
const int CLK = 43;
const int OE = 42;
const int LAT = 41;

int i = 1;


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
}
}

void setup() {
  // put your setup code here, to run once:
  	pinMode(r1,OUTPUT);
	pinMode(r2,OUTPUT);
	pinMode(g1,OUTPUT);	
	pinMode(g2,OUTPUT);
	pinMode(b1,OUTPUT);
	pinMode(b2,OUTPUT);
	pinMode(A,OUTPUT);
	pinMode(B,OUTPUT);
	pinMode(C,OUTPUT);
	pinMode(D,OUTPUT);
	pinMode(OE,OUTPUT);
	pinMode(LAT,OUTPUT);
	pinMode(CLK,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int j;
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
}
