int led = 13;
int ledTwo = 12;
int ledThree = 11;
int ledFour = 10;
int ledFive = 9;
int randy;
void setup() 
{
 
 pinMode(led, OUTPUT);
 pinMode(ledTwo, OUTPUT);
 pinMode(ledThree, OUTPUT);
 pinMode(ledFour, OUTPUT);
 pinMode(ledFive, OUTPUT); 
}

void loop() 
{
  for(int i = 0; i < 100; i++)
  {
    randomNumber();
    
   if(randy == 9)
      {
        digitalWrite(ledFive, HIGH);
        delay(50);
        digitalWrite(ledFive, LOW);
      }
      else if(randy == 10)
      {
        digitalWrite(ledFour, HIGH);
        delay(50);
        digitalWrite(ledFour, LOW);
      }
      else if(randy == 11)
      {
        digitalWrite(ledThree, HIGH);
        delay(50);
        digitalWrite(ledThree, LOW);
      }
      else if(randy == 12)
      {
        digitalWrite(ledTwo, HIGH);
        delay(50);
        digitalWrite(ledTwo, LOW);
      }
      else
      {
        digitalWrite(led, HIGH);
        delay(50);
        digitalWrite(led, LOW);
      }
  } 

  delay(1000);
  
}

 void randomNumber()
 {
    randy = random(9,14);
 }

