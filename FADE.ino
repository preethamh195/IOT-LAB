void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<=255;i=i+5){
    analogWrite(9,i);
    delay(100);
  }
  for(i=255;i>=0;i=i-5){
    analogWrite(9,i);
    delay(100);
  }
}
