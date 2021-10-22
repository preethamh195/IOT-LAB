int red=13;
int yellow=10;
int green=8;
void setup() {
  // put your setup code here, to run once:
pinMode (red,OUTPUT);
pinMode (yellow,OUTPUT);
pinMode (green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite (red,HIGH);
 digitalWrite(yellow,LOW);
 digitalWrite(green,LOW);
 delay(90);
 digitalWrite(red,LOW);
 digitalWrite (yellow,HIGH);
 digitalWrite(green,LOW);
 delay(900);
 digitalWrite(red,LOW);
 digitalWrite(yellow,LOW);
 digitalWrite (green,HIGH);
 delay(9);
}
