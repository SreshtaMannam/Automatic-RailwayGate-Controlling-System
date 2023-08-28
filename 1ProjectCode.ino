#include <Servo.h>
int ir1 = 2;
int ir2= 7;
Servo myservo1;
Servo myservo2:
void setup()
{
pinMode (ir1, INPUT);
pinMode (ir2, INPUT);
pinMode (13, OUTPUT)://LED
pinMode (12, OUTPUT)://BUZZER
pinMode (11, OUTPUT); //LED
pinMode (10, OUTPUT);//LED
pinMode (9, OUTPUT);//LED
myservol.attach (3);
myservo2.attach (5);
}
void loop() {
if (digitalRead(irl) == LOW)
myservo2.write(90);
// sets the servo at 90 degree position
myservol.write(90);
// sets the servo at 90 degree position
digitalWrite(13, HIGH); //LED
digitalWrite(12, HIGH);//BUZZER
digitalWrite(11, LOW); //LED
digitalWrite(10, LOW); //LED
digitalWrite(9, HIGH); //LED
}
else if (digitalRead(ir2) =LOW) {
myservo2.write(0); // sets the servo at 90 degree position
myservol.write(0); // sets the servo at 90 degree position
digitalWrite (13, LOW); //LED
digitalWrite(12, LOW);//BUZZER
digitalWrite(11, HIGH); //LED
digitalWrite (10, HIGH); //LED
digitalWrite (9, LOW); //LED
}
}