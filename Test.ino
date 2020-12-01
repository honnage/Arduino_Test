const int ledPin1 = D7;
const int ledPin2 = D6;

int timeOn = 1000;
int timeOff = 1000;

void setup() {

  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);

  Serial.begin(9600);
  //Serial.print("LED On/Off ");
  //Serial.println(timeOn + timeOff);
}

void loop() {
  
  digitalWrite(ledPin1, HIGH);  
  digitalWrite(ledPin2, HIGH);  
  Serial.println(1);
  delay(timeOn); 
  
  digitalWrite(ledPin1, LOW);   
  digitalWrite(ledPin2, LOW);  
  Serial.println(0);
  delay(timeOff);  
}
