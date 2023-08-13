char userInput;
#include <Servo.h>
Servo servo1;
Servo servo2;

void setup() {
  Serial.begin(9600);
  servo1.attach(15);
  servo2.attach(2);
}

void loop() {
  if(Serial.available()>0){
    userInput = Serial.read();
    if(userInput == '0'){
      servo1.write(0);
    }
    else if(userInput == '1'){
      servo1.write(180);
    }
    if(userInput == '2'){
      servo2.write(180);
    }
    else if(userInput == '3')
      servo2.write(0);
    }

}
