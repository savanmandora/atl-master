const int sw1=6;
const int sw2=7;
const int led=13;
int sw1_state=0;
int sw2_state=0;


void setup()
{
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  
  }

void loop()
{
  sw1_state=digitalRead(sw1);
  sw2_state=digitalRead(sw2);

  if(sw1_state||sw2_state==1)
  {
    digitalWrite(13,HIGH);
    
    }
  else{
    digitalWrite(13,LOW);
    }  
    
  
  }
