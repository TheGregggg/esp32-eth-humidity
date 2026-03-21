#include <SoftwareSerial.h>

// These constants won't change.  They're used to give names
// to the pins used:
const int TX = 3;  // Transmit
const int RX = 2; // Receive

SoftwareSerial myserial(RX, TX);


void setup() {
  
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  
  // initialize serial communications at 9600 bps:
  myserial.begin(9600); 
}

void serialEvent()
{
  String TXData = Serial.readStringUntil('\n');
  
  if (TXData.length())
  {
    myserial.print(TXData);
  }
}

void loop() {
  myserial.listen();
  
  // Receive data
  while (myserial.available() > 0)
    Serial.write(myserial.read());
}
