const int analogInPin = A0;
int sensorValue = 0;

const int ledPin = D7;
int adcValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  //adcValue = sensorValue;
  adcValue = map(sensorValue, 4, 1024,100, 1500);
  
  Serial.println(adcValue);
  
  digitalWrite(ledPin, HIGH);  
  delay(adcValue);
  
  digitalWrite(ledPin, LOW);  
  delay(adcValue);
  
}
