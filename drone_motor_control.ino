#include <servo.h>
#include "drone_functions.h"

// button interuprupt pins
// useable pins 2,3,9,10,11,13,15,A5,A7
#define Test_pin 



// motor pins
#define pin_top_left_motor
#define pin_top_right_motor
#define pin_bottom_left_motor
#define pin_bottom_right_motor


int motor_max = 2000;
int motor_inital = 1000;
int motor_speed_current = 0; 

// setup functions
void LED_interupt_setup()
{
  attachInterrupt(digitalPinToInterupt());
}

void motor_setup_functions
{

}
void test_motor_control()
{
  


  
}
// calbration functions
void motor_auto_calibrate()
{
  // ramp up
  for(int motor_intial = 0; motor_inital <= motor_max; motor_inital += 100)
  {
    
  }
  // ramp down
  for(int motor_peak = motor_max ; motor_peak >= motor_inital ; -=100)
  {
    
  }

  
}

//motion functions
void clockwise_roll()
{
  
}

void counter_clockwise_roll()
{
  
}
