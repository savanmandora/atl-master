const int buzzerpin=2;
int i=0;

void setup()
{
  pinMode(2,OUTPUT);
  
  }
void loop()
{
 for(i=0;i<5;i++)
 {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(2000);
  } 
}
