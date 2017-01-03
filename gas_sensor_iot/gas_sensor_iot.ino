const int gasPin = A0; //GAS sensor output pin to Arduino analog A0 pin
const int threshold=400;

void setup()
{
  Serial.begin(9600); //Initialize serial port - 9600 bps
}

void loop()
{
  Serial.println(analogRead(gasPin));
  if(analogRead(gasPin)>=threshold){
     Serial.println("OOOO LEAKAGE");
  }
  delay(1000); // Print value every 1 sec.
}

