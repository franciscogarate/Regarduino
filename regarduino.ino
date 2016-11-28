/*
 * There are 1000 milliseconds in a second.
 * 60 * 60 * 1000 * 24 =  86.400.000 a day
 * 1.800.000 a half-hour
 * 3.600.000 a hour
 */
//int xhoras = (3600000 * 7); // 7 is the number of hours since switch on
//int day = 8000;
int day = 86400000;
//int wateringtime = 1200000; // 18 minutes
//int wateringpause = 10000;
int temp = 1000; // delay x 13
int temp2 = 1200000; // irrigation time x 4
int temp3 = 5000; // transition time x 3
//int temp4 = ( day ) - (13 * temp) - ( 4 * temp2 ) - ( 3 * temp3 ) ; // sleep time x 1
int temp4 = 82052000;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
// the loop function runs over and over again forever
// 82052000
// 10 horas = 36000000 ; 82052000 - 36000000 ; 46052000
void loop() {
  delay(180000);  // 2 hours - switch on about 19h
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1080000);  // watering time
  digitalWrite(1, LOW);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  delay(5000);  // transition time
  digitalWrite(2, HIGH);
  delay(1000);  
  digitalWrite(4, HIGH);
  delay(1080000);  // watering time
  digitalWrite(2, LOW);
  delay(1000);  
  digitalWrite(4, LOW);
  delay(5000);  // 2 LAP!
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1080000);  // watering time
  digitalWrite(1, LOW);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  delay(5000);  // transition time
  digitalWrite(2, HIGH);
  delay(1000);  
  digitalWrite(4, HIGH);
  delay(1080000);  // watering time
  digitalWrite(2, LOW);
  delay(1000);  
  digitalWrite(4, LOW);
  delay(1000);  // transition time
  delay(81872000); // 
}
