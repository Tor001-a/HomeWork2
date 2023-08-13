#define led1 2
#define led2 4
#define led3 15
void setup() {
Serial.begin(115200);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}
void loop() {
if(Serial.available())
{
String input = Serial.readStringUntil('\n');
if(input == "red")
  {
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
  }
else if(input == "yellow")
  {
digitalWrite(led2, HIGH);
digitalWrite(led1, LOW);
digitalWrite(led3, LOW);
  }
else if(input == "green")
  {
digitalWrite(led3, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led1, LOW);
  }
else if(input == "traffic")
  {
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 
 digitalWrite(led1, HIGH);
 delay(3000);
 digitalWrite(led1, LOW);
 digitalWrite(led3, HIGH);
 delay(3000);
 digitalWrite(led3, LOW);
 digitalWrite(led2, HIGH);
 delay(1000);
 digitalWrite(led2, LOW);
 
 digitalWrite(led1, HIGH);
  }
}
}