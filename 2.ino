int fromPin=2;
int endPin=5;
int fps=300;
int pin=fromPin;
int target=endPin;
int mode=1;

int inPin=A1;
int val=0;
void setup() {
  for (int x = fromPin-1; x < endPin+1; x++) {
    pinMode(x, OUTPUT);
  }
  pinMode(inPin, INPUT);
  Serial.begin(9600);

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

void mode1(){
  
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
  delay(fps);
}
void mode2(){
  turn0ff();
  delay(fps);
  for (int x= fromPin-1; x < endPin+1; x++) {
   turnOn(x);
  }
  delay(fps);
}
void loop() {
  
  
  //val = digitalRead(inPin);
  val=analogRead(inPin);
  Serial.println(val);
  
  
  if(val==653){
    mode+=1;
    if(mode==3){
      mode=1;
    }
  }
  if(mode==1){
    mode1();
  }else if(mode==2){
    mode2();
  }
  
}
