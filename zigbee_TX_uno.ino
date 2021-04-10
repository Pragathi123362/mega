int ir=2;
void setup()
{
Serial.begin(9600);
pinMode(ir,OUTPUT);
}
void loop()
{
 int irvalue=digitalRead(ir);
Serial.write("h"); 
delay(3000);

}
