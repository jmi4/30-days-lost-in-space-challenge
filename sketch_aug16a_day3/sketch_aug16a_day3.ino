int LED = 12;
int Switch1 = 2; //pin 2 will be attached to the switch
void setup() {
  // setup both an input and an output
  pinMode(LED, OUTPUT);
  pinMode(Switch1, INPUT);

}

void loop() {
  // take actions based on the status of the switch
  if (digitalRead(Switch1) == HIGH){
   digitalWrite(LED, LOW);
   delay(1000);
   digitalWrite(LED, HIGH);
   delay(100);
   digitalWrite(LED, LOW);
   delay(100);
   digitalWrite(LED, HIGH);
   delay(100);
 }
 else {
  digitalWrite(LED, LOW); // turn LED OFF
 }
}
