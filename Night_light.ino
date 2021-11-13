int ldrvalue=0;
int lightsensitivity=300;
void setup() {
  // put your setup code here, to run once:
  serial.begin(9600);
  pinmode(11,output);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrvalue=analogread(a0);
  serial.println(ldrvalue);
  delay(50);

  if(ldrvalue>lightsensitivity) {
    digitalwrite(11,low);
  }
  else {
    digitalwrite(11,high);
  }
}
