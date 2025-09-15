#include <Servo.h>
Servo Servo_gripper;  //objeto
int pwm_max = 180;    //gripper abierto max
int pwm_min = 40;     //gripper cerrado min

void setup() {
  Servo_gripper.attach(2);  //servo en pin 2 pwm
}

void loop() {
  Servo_gripper.write(pwm_max);
  delay(2000);
  Servo_gripper.write(pwm_min);
  delay(2000);
}