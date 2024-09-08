#include<dht.h>

dht DHT;
const int dht=7;


void setup() {
  Serial.begin(9600);

}

void loop() {

 int chk=DHT.read11(dht);
 Serial.print("Temperature=");
 Serial.println(DHT.temperature);
 Serial.print("Humidity=");
 Serial.println(DHT.humidity);
 delay(1000);

}