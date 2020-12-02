//const int analogInPin = A0;
//int sensorValue = 0;

const int ledPin = D7;
int adcValue = 0;

int delayTime = 50;
int duty;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  for (duty = 0; duty < 1024; duty += 10){
    analogWrite(ledPin, duty);
    Serial.println(duty);
    delay(delayTime);
  }
  
}
