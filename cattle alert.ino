 #include <Servo.h>
 #define DETECT 8 // pin 2 for  sensor
#define ACTION 2 // pin 8 for action to do someting
Servo servo_test;
int angle = 0;
void setup() {
  Serial.begin(9600);
 
  pinMode(DETECT, INPUT);//define detect input pin
  pinMode(ACTION, OUTPUT);//define ACTION output pin
 servo_test.attach(7);
 servo_test.write(0); 
delay(2000);
}

void loop() {

  servo_test.write(180); 
delay(1000);
servo_test.write(0);
delay(1000); 
  int detected = digitalRead(DETECT);// read Laser sensor
 
  if( detected == LOW)
  {
    digitalWrite(ACTION,HIGH);// set the buzzer ON
   //Serial.println("Detected!");

  }else{
    digitalWrite(ACTION,LOW); // Set the buzzer OFF
   // Serial.println("No laser");
     // Laser Sensor code for Robojax.com

  }
  delay(200);
}
