#include<Servo.h>
Servo Myservo1;
Servo Myservo2;
Servo Myservo3;
Servo Myservo4;

int pos1=90;
int pos2=90;
int pos3=90;
int pos4=90;
int x1,x2,y2;
int Y1;


void setup()
{
  Myservo1.attach(5);
  Myservo2.attach(6);
  Myservo3.attach(9);
  Myservo4.attach(10);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop()
{

  x1 = analogRead(A0);
  Y1 = analogRead(A1);
  x2 = analogRead(A2);
  y2 = analogRead(A3);
  Serial.print(x1);Serial.print("-");Serial.print();Serial.print("-");
  Serial.print(x2);Serial.print("-"); Serial.println(y2);
  if(x1<100){
    Myservo1.write(pos1);
    pos1 += 10;
    delay(100);
  }
  else if(x1>900){
    Myservo1.write(pos1);
    pos1 -= 10;
    delay(100);
  }

  if(Y1<100){
    Myservo2.write(pos2);
    pos2 += 10;
    delay(100);
  }
  else if(Y1>900){
    Myservo2.write(pos2);
    pos2 -= 10;
    delay(100);
  }
  
  if(x2<100){
    Myservo3.write(pos3);
    pos3 += 10;
    delay(100);
  }
  else if(x2>900){
    Myservo3.write(pos3);
    pos3 -= 10;
    delay(100);
  }

  if(y2<100){
    Myservo4.write(pos4);
    pos4 += 10;
    delay(100);
  }
  else if(y2>900){
    Myservo4.write(pos4);
    pos4 -= 10;
    delay(100);
  }



}
