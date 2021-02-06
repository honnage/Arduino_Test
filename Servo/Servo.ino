#include <Servo.h>
Servo myservo; //ประกาศตัวแปรแทน Servo

void setup()
{
  myservo.attach(2); // D4 (กำหนดขาควบคุม Servo)
}

void loop()
{
  myservo.write(0); // สั่งให้ Servo หมุนไปองศาที่ 0
  delay(1000);

  myservo.write(90); // สั่งให้ Servo หมุนไปองศาที่ 0
  delay(1000);

  myservo.write(180); // สั่งให้ Servo หมุนไปองศาที่ 90
  delay(1000);

  myservo.write(90); // สั่งให้ Servo หมุนไปองศาที่ 90
  delay(1000); 

  myservo.write(0); // สั่งให้ Servo หมุนไปองศาที่ 0
  delay(1000); 
 
  
}
