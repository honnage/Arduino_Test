const int ledPin1 = D7;
const int ledPin2 = D6;

int timeOn = 400;
int timeOff = 400;

void setup() {
// pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);

  Serial.begin(9600);
  Serial.print("LED On/Off ");
  Serial.println(timeOn + timeOff);
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(ledPin1, HIGH);  
  digitalWrite(ledPin2, HIGH);  
  Serial.println("LED On");
  delay(timeOn); 
  
  digitalWrite(ledPin1, LOW);   
  digitalWrite(ledPin2, LOW);  
  Serial.println("LED Off");
  delay(timeOff);  
}
