int state = 0;
int zdpin = 2;
void setup() {
  pinMode(8, OUTPUT);
  pinMode(zdpin, INPUT);
  pinMode(13, INPUT);
  Serial.begin(9600);
  //attachInterrupt(digitalPinToInterrupt(zdpin), jb_low, LOW);
  //attachInterrupt(digitalPinToInterrupt(zdpin), jb_high, HIGH);
}
void turnOn(int num) {
  digitalWrite(num, HIGH);
}
void jb_low() {
  //
  //Serial.println('zd');
}
void jb_high() {
  state = 0;
}
void loop() {
  int val = digitalRead(13);

  //Serial.println(val);
  if (val == 1) {
    for (int i = 30; i < 6000; i++) {
      tone(8, i);
    }

    for (int i = 6000; i > 30; i--) {
      tone(8, i);
    }
  }
  //delay(10);

  //val = digitalRead(inPin);
  //val=analogRead(inPin);
  //Serial.println(val);
}
