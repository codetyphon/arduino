void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}
void off() {
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}
void led_1() {
  off();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}


void led_2() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}


void led_3() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
}

void led_4() {
  off();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void led_5() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void led_6() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void led_7() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}

void led_8() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void led_9() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void led_0() {
  off();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
}

int n = 0;
void show(int n) {
  if (n == 0) {
    led_0();
  }
  if (n == 1) {
    led_1();
  }
  if (n == 2) {
    led_2();
  }
  if (n == 3) {
    led_3();
  }
  if (n == 4) {
    led_4();
  }
  if (n == 5) {
    led_5();
  }
  if (n == 6) {
    led_6();
  }
  if (n == 7) {
    led_7();
  }
  if (n == 8) {
    off();
    led_8();
  }
  if (n == 9) {
    led_9();
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  show(n);
  delay(500);

  if (1 == digitalRead(8)) {
    n += 1;
    if (n == 10) {
      n = 0;
    }
  } else {
    n -= 1;
    if (n == 0) {
      n = 9;
    }
  }

  //led_0();
  //digitalWrite(1, HIGH);
  //digitalWrite(2, HIGH);

}
