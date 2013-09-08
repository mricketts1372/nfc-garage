byte counter;

void setup() {
  Serial.begin(2400);
  counter = 0;
}

void loop() {
  // send out to transmitter
  Serial.print(counter);
  counter++;
  delay(1000);
}
