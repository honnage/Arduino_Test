//const int analogInPin = A0;
//int sensorValue = 0;

const int ledPin = D7;
//int adcValue = 0;

//int delayTime = 50;
int duty;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("Enter 0 - 1024");
}

void loop() {

  if( Serial.available() > 0){
    duty =  Serial.parseInt();

    analogWrite(ledPin, duty);
    Serial.println(duty);
  }
  delay(10);
}
