int Light = 12 ; // HERO board pin 12

void setup() {
  // initialize digital pin as an output, then set its value to LOW (0 volts)
  // HIGH = 5 volts
  pinMode(Light, OUTPUT);
  digitalWrite(Light, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Light, LOW);
  delay(2000);
  digitalWrite(Light, HIGH);
  delay(100);

}
