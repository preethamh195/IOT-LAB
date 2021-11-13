int dpin0=5;
int apin0=1;
int apinval;
void setup() {
  // put your setup code here, to run once:
  pinmode(dpin0,input);
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  serial.print("d0 value");
  serial.println(digitalread(dpin0));
  serial.print("a0 value");
  apinval=analogread(apin0);
  serial.println(apinval);
  delay(1000);
}
