int randNumber;

void setup() {
}

void loop() {
  randNumber = random(10, 14); // Choose a random number between 10-13
  digitalWrite(randNumber, HIGH); // Randomly light up one of the 3 lights from day 4
  delay(499); 
  digitalWrite(randNumber, LOW); // Turn off the same light as above just before turning on the the next one.
  delay(501);
}
