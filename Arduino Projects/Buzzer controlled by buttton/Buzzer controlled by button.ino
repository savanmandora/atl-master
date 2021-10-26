const int buttonpin=2;
const int buzzerpin=7;
int buttonstate=0;

void setup()
{
  pinMode(2,INPUT);
  pinMode(7,OUTPUT);
  }

 void loop()
 {
  buttonstate=digitalRead(buttonpin);

  if(buttonstate==0)
  {
    digitalWrite(7,HIGH);
    
    }
  else
  {
    digitalWrite(7,LOW);
    }  
  
  }
