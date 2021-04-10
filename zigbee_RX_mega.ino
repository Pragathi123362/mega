char b;
 void setup()
{
Serial.begin(9600);
}
void loop()
{
while (Serial.available()>0) {
  b=Serial.read();
Serial.println(b); 

}
}

//here uno acts as tx part and mega acts as rx part. so connect arduino tx to zigbee rx as transmitting side


