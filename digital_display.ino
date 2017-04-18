int group1 = 2;
int group2 = 3;
int group3 = 4;
int group4 = 5;
int group5 = 6;
int group6 = 7;
int group7 = 8;
int ledPin = 13;
int timeOn = 1000;
int timeOff = 0;

void setup() {
  // put your setup code here, to run once:

pinMode(group1, OUTPUT);
pinMode(group2, OUTPUT);
pinMode(group3, OUTPUT);
pinMode(group4, OUTPUT);
pinMode(group5, OUTPUT);
pinMode(group6, OUTPUT);
pinMode(group7, OUTPUT);
pinMode(ledPin, OUTPUT);

digitalWrite(group1, HIGH);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(100);

digitalWrite(group1, LOW);
digitalWrite(group2, HIGH);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(100);

digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, HIGH);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(100);

digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, HIGH);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(100);

digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, HIGH);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(100);

digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, HIGH);
digitalWrite(group7, LOW);
delay(100);

digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, HIGH);
delay(100);


digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(500);


}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(ledPin, LOW);

//Digit1
digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, HIGH);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, HIGH);
digitalWrite(group7, LOW);
delay(timeOn);

//Digit2

digitalWrite(group1, HIGH);
digitalWrite(group2, LOW);
digitalWrite(group3, HIGH);
digitalWrite(group4, HIGH);
digitalWrite(group5, HIGH);
digitalWrite(group6, LOW);
digitalWrite(group7, HIGH); 
delay(timeOn);

//Digit3
digitalWrite(group1, HIGH);
digitalWrite(group2, LOW);
digitalWrite(group3, HIGH);
digitalWrite(group4, HIGH);
digitalWrite(group5, LOW);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(timeOn);

//Digit4

digitalWrite(group1, LOW);
digitalWrite(group2, HIGH);
digitalWrite(group3, HIGH);
digitalWrite(group4, HIGH);
digitalWrite(group5, LOW);
digitalWrite(group6, HIGH);
digitalWrite(group7, LOW);
delay(timeOn);

//Digit5

digitalWrite(group1, HIGH);
digitalWrite(group2, HIGH);
digitalWrite(group3, LOW);
digitalWrite(group4, HIGH);
digitalWrite(group5, LOW);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(timeOn);

//Digit6
digitalWrite(group1, HIGH);
digitalWrite(group2, HIGH);
digitalWrite(group3, LOW);
digitalWrite(group4, HIGH);
digitalWrite(group5, HIGH);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(timeOn);

//Digit7

digitalWrite(group1, HIGH);
digitalWrite(group2, LOW);
digitalWrite(group3, HIGH);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, HIGH);
digitalWrite(group7, LOW);
delay(timeOn);

//Digit8

digitalWrite(group1, HIGH);
digitalWrite(group2, HIGH);
digitalWrite(group3, HIGH);
digitalWrite(group4, HIGH);
digitalWrite(group5, HIGH);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(timeOn);

//Digit9

digitalWrite(group1, HIGH);
digitalWrite(group2, HIGH);
digitalWrite(group3, HIGH);
digitalWrite(group4, HIGH);
digitalWrite(group5, LOW);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(timeOn);

//Digit0

digitalWrite(group1, HIGH);
digitalWrite(group2, HIGH);
digitalWrite(group3, HIGH);
digitalWrite(group4, LOW);
digitalWrite(group5, HIGH);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(500);
digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(500);

digitalWrite(group1, HIGH);
digitalWrite(group2, HIGH);
digitalWrite(group3, HIGH);
digitalWrite(group4, LOW);
digitalWrite(group5, HIGH);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(500);

digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(500);

digitalWrite(group1, HIGH);
digitalWrite(group2, HIGH);
digitalWrite(group3, HIGH);
digitalWrite(group4, LOW);
digitalWrite(group5, HIGH);
digitalWrite(group6, HIGH);
digitalWrite(group7, HIGH);
delay(500);

digitalWrite(group1, LOW);
digitalWrite(group2, LOW);
digitalWrite(group3, LOW);
digitalWrite(group4, LOW);
digitalWrite(group5, LOW);
digitalWrite(group6, LOW);
digitalWrite(group7, LOW);
delay(500);


}
