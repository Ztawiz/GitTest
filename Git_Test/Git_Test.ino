#include <SPI.h>
#include <RFM69.h>


#define NETWORKID     0   // Must be the same for all nodes (0 to 255)
#define MYNODEID      1   // My node ID (0 to 255)
#define TONODEID      2   // Destination node ID (0 to 254, 255 = broadcast)

#define FREQUENCY   RF69_433MHZ
#define ENCRYPT     false
#define USEACK      false

RFM69 radio;

void setup() {
  Serial.begin(9600);
  radio.initialize(FREQUENCY, MYNODEID, NETWORKID);
  radio.setHighPower(); // Always use this for RFM69HCW
}

void loop() {
  // put your main code here, to run repeatedly:
  // testar om man kan ladda upp!
  // Nu har vi gjort en ändring i en fil!!!

  // Nu har vi gjort en ändring till HAHAHAHAHA!!!!
}
