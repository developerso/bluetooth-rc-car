#include <AFMotor.h>

AF_DCMotor motor2(2);
AF_DCMotor motor4(4);

char bt='S';
void setup()
{
   Serial.begin(9600);
   motor2.setSpeed(255);
   motor4.setSpeed(255);
   Stop();
}


void loop() {
bt=Serial.read();
Serial.print(bt);
if(bt=='F')
{
 forward(); 
}

if(bt=='B')
{
  backward(); 
}

if(bt=='L')
{
 left(); 
}

if(bt=='R')
{
  right();
}

if(bt=='S')
{
 Stop(); 
}

}
void forward()
{
  motor2.run(FORWARD);
  motor4.run(FORWARD);
}

void backward()
{

  motor2.run(BACKWARD);
  motor4.run(BACKWARD);
}
void left()
{
  motor2.run(BACKWARD);
  motor4.run(BACKWARD);
}
void right()
{
  motor2.run(FORWARD);
  motor4.run(FORWARD);
}
void Stop()
{
  motor2.run(RELEASE);
  motor4.run(RELEASE);
}








