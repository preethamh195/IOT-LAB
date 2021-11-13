int sensorvalue=0;
int outputvalue=0;
void setup() {
  // put your setup code here, to run once:
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue=analogread(a0);
  outputvalue=map(sensorvalue,0,1023,0,255);
  analogwrite(9,outputvalue);
  serial.println(sensorvalue);
  serial.println(outputvalue);
  delay(100);
}
