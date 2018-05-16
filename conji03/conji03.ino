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
  mySerial.write('G');
}

void serialEvent()
{
  while (Serial.available()) //检查当前串口缓冲区是否有内容
  {
    mySerial.write(Serial.read());
  }
}
void loop()
{
}