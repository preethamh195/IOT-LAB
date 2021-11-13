int outputpin=0;
void setup() {
  // put your setup code here, to run once:
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rawvoltage=analogread(outputpin);
  float millivolts=(rawvoltage/1024.0)*5000;
  float celsius=millivolts/10;
  serial.print(celsius);
  serial.println(" degrees celsius,");
  serial.print((celsius*9)/5+32);
  serial.println(" degrees fahrenheit,");
  delay(700);
}
