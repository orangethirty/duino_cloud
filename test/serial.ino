/* 
Serial Hello World / test.
returns "Hello World" when serial is read.

code is in public domain
  
*/

int ledPin = 13;   // set pin for the LED
int i=0;           // simple counter to show we're doing something

void setup() {
  pinMode(ledPin,OUTPUT);   // declare the pin as output
  Serial.begin(9600);        // connect to the serial port
}

void loop () {
  Serial.print(i++);
  Serial.println(" Hello, world!");  // prints hello to serial
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
