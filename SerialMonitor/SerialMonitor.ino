const int ledPin1 = D7;
const int ledPin2 = D6;

int timeOn = 10;
int timeOff = 10;

void setup() {

  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);

  Serial.begin(9600);
  Serial.println("Status ");
}

void loop() {
  if(Serial.available() > 0){ //ตรวจสอบจำนวนไบต์
    char sRead = Serial.read(); //อ่านข้อมูลที่กดส่ง
    
    if(sRead == '1'){
        digitalWrite(ledPin1, HIGH);  
        digitalWrite(ledPin2, HIGH);
        Serial.println(1);
    }
    
    if(sRead == '0'){
        digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
        Serial.println(0);
    }
  }
  
  delay(10);
  
}
