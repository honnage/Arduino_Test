const int ledPin1 = 13;
const int buttonPin = 4;

void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.print(buttonState);
  Serial.print(" ");

  if(buttonState == LOW){
    digitalWrite(ledPin1,HIGH);
    Serial.println(3);
  }else{
    digitalWrite(ledPin1,LOW);
    Serial.println(2);
  }

  delay(100);
  
}
