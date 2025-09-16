#include <Servo.h>
Servo Servo_base;  //objeto
int pwm_max = 180;    //gripper abierto max
int pwm_min = 0;     //gripper cerrado min

void setup() {
  Servo_base.attach(4);  //servo en pin 2 pwm
}

void loop() {
  Servo_base.write(pwm_min);
  delay(2000);
}
