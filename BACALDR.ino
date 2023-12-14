/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-ldr-module
 */

#define AO_PIN 32  // ESP32's pin GPIO36 connected to AO pin of the ldr module

void setup() {
  // initialize serial communication
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(AO_PIN);
  delay(1000);

  Serial.print(" ");
  Serial.println(lightValue);
}
