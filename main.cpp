#include "robot-config.h"
          

int main() {
    for(;;){
         leftMotor.spin(vex::directionType::fwd, (Controller1.Axis3.value() + Controller1.Axis1.value()), vex::velocityUnits::pct);
         rightMotor.spin(vex::directionType::fwd, (Controller1.Axis3.value() - Controller1.Axis1.value()), vex::velocityUnits::pct);
         leftMotor2.spin(vex::directionType::fwd, (Controller1.Axis3.value() + Controller1.Axis1.value()), vex::velocityUnits::pct);
         rightMotor2.spin(vex::directionType::fwd, (Controller1.Axis3.value() + Controller1.Axis1.value()), vex::velocityUnits::pct);
        vex::task::sleep(20);
    }
   
if
    Controller1.ButtonR1.pressing(Pneumatic = 1);
}
//Competitiion.isAutonomous(){
//if (true){
    
