const int trigpin=2;
const int echopin=4;
const int buzzpin=7;
void setup() {
  // put your setup code here, to run once:
  pinmode(buzzpin,output);
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pinmode(trigpin,output);
  digitalwrite(trigpin,low);
  delaymicroseconds(2);
  digitalwrite(trigpin,high);
  delaymicroseconds(10);
  digitalwrite(echopin,input);
  long duration=pulsein(echopin,high);
  long inches=mtoi(duration);
//for buzzer part
  if(inches<5) 
    digitalwrite(buzzpin,high);
  else 
    digitalwrite(buzzpin,low);
  
  long cm=mtoc(duration);

  serial.print(inches);
  serial.print(" in, ");
  serial.print(cm);
  serial.println(" cm ");
  delay(500);
}

long mtoi(long microseconds) {
  return microseconds/74/2;
}
long mtoc(long microseconds) {
  return microseconds/29/2;
}
