int fromPin=1;
int endPin=5;
int fps=150;
int pin=fromPin;
int target=endPin;
void setup() {
  for (int x = fromPin-1; x < endPin+1; x++) {
    pinMode(x, OUTPUT);
  }
}
void turn0ff() {
  for (int x = fromPin-1; x < endPin+1; x++) {
    digitalWrite(x, LOW);
  }
}
void turnOn(int num) {
  digitalWrite(num, HIGH);
}

void toLeft(){
  pin-=1;
}
void toRight(){
  pin+=1;
}
void loop() {
  delay(fps);
  turn0ff();
  if(pin<target){
    toRight();
  }
  if(pin>target){
    toLeft();
  }
  if(pin==fromPin){
    target=endPin;
  }
  if(pin==endPin){
    target=fromPin;
  }
  turnOn(pin);
}
