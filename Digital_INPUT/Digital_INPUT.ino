const int ledPin1 = 13;
const int buttonPin = 4;

void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if(buttonState == LOW){
    digitalWrite(ledPin1,HIGH);
    Serial.println(1);
  }else{
    digitalWrite(ledPin1,LOW);
    Serial.println(0);
  }

  delay(100);
  
}
