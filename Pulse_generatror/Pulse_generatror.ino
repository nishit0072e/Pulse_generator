#include<TimerOne.h>
const int outpin = 10;
const int inpin = 3;
const int inpin2 = 5;
int values =0;
int values2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(outpin,OUTPUT);
  pinMode(inpin,INPUT);
  pinMode(inpin2,INPUT);
  Timer1.initialize(1000000);
  Timer1.pwm(outpin,500);
}

void loop() {
  // put your main code here, to run repeatedly:
  values = digitalRead(inpin);
  values2 = digitalRead(inpin2);
  delay(100);
  Serial.print(values);
  Serial.println();
  Serial.print(values2);
  Serial.println();
}
