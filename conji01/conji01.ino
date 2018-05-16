#include <SoftwareSerial.h>
#define ARDUINO_RX 5
#define ARDUINO_TX 4
SoftwareSerial mySerial(ARDUINO_RX, ARDUINO_TX);
void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(13, 1);
  attachInterrupt(0, onChange, FALLING);
}

void onChange()
{
  mySerial.write('E');
}

void loop()
{
}
