const int temperatureSensorPin = A5;
byte led_pins[] = {3, 4, 5, 6, 7};
byte btn = 2;
int flashCount = 0;

void setup() {
  pinMode(temperatureSensorPin, INPUT);
  pinMode(btn, INPUT);
  for (int i = 0; i < 5; i++) {
    pinMode(led_pins[i], OUTPUT);
  }
  attachInterrupt(digitalPinToInterrupt(btn), ledFlash, CHANGE);
}

void loop() {
  checkTemp();
}

void checkTemp() {
  int temp = analogRead(temperatureSensorPin);
  int tempC = map(temp, 31, 368, -40, 125);

  if (tempC > 0) {
    lightUp(tempC);
  } else {
    lightDown(tempC);
  }
}

void lightUp(int tempC) {
  for (int i = 0; i < 5; i++) {
    if (tempC < (10 + (10 * i))) {
      digitalWrite(led_pins[i], LOW);
    }
    else
      digitalWrite(led_pins[i], HIGH);
  }
}

void lightDown(int tempC) {
  for (int i = 4; i >= 0; i--) {
    if (tempC >= (-25 + (5  * i))) {
      digitalWrite(led_pins[i], LOW);
    } else {
      digitalWrite(led_pins[i], HIGH);
    }
  }
}

void ledFlash() { 
  for (flashCount=0;flashCount < 10;flashCount++) {
    for (int i = 0; i < 5; i++) {    
      digitalWrite(led_pins[i], LOW);
      
    }
    delay(15000);
    for (int i = 0; i < 5; i++) {
      digitalWrite(led_pins[i], HIGH);
      
    }
    delay(15000);
    
  }
}
