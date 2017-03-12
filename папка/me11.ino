int b2 = 2;
volatile int state= LOW;
int p5 = 5;
int p4 = 4;
void setup() {
  pinMode(p4, OUTPUT);
  pinMode(p5, OUTPUT);
  attachInterrupt(0, on, CHANGE);
}
void on() {
  state=!state;
  /*digitalWrite(p5, 1);
  digitalWrite(p4, 0);*/
  delay(100);
}
void loop() {
  /*
  digitalWrite(p4, HIGH);
  digitalWrite(p5, 0);
  */
  digitalWrite(p5, state);
}
