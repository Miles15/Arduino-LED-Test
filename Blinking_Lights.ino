int led = 13;
int ledTwo = 12;
int ledThree = 11;
int ledFour = 10;
int ledFive = 9;
int delayTime = 0;
int randy;
int randyTwo;
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
  for(int i = 0; i < 4; i++)
  {
    // all five blinking VERY FASt
    digitalWrite(led, HIGH);   
    digitalWrite(ledTwo, HIGH);  
    digitalWrite(ledThree, HIGH);   
    digitalWrite(ledFour, HIGH);    
    digitalWrite(ledFive, HIGH);  
    delay(50);
    digitalWrite(led, LOW);   
    digitalWrite(ledTwo, LOW);  
    digitalWrite(ledThree, LOW);   
    digitalWrite(ledFour, LOW);    
    digitalWrite(ledFive, LOW);
    delay(50);
  }
  
  delay(500);

  
  for(int i = 0; i < 9; i++)
  {
    //left to right
    digitalWrite(led, HIGH);
    delay(200-delayTime);
    digitalWrite(led, LOW);
    delay(200-delayTime);

    digitalWrite(ledTwo, HIGH);
    delay(200-delayTime);
    digitalWrite(ledTwo, LOW);
    delay(200-delayTime);
    
    digitalWrite(ledThree, HIGH);
    delay(200-delayTime);
    digitalWrite(ledThree, LOW);
    delay(200-delayTime);
    
    digitalWrite(ledFour, HIGH);
    delay(200-delayTime);
    digitalWrite(ledFour, LOW);
    delay(200-delayTime);
    
    digitalWrite(ledFive, HIGH);
    delay(200-delayTime);
    digitalWrite(ledFive, LOW);
    delay(200-delayTime);

    //right to left
    digitalWrite(ledFive, HIGH);
    delay(200-delayTime);
    digitalWrite(ledFive, LOW);
    delay(200-delayTime);
    
    digitalWrite(ledFour, HIGH);
    delay(200-delayTime);
    digitalWrite(ledFour, LOW);
    delay(200-delayTime);

    digitalWrite(ledThree, HIGH);
    delay(200-delayTime);
    digitalWrite(ledThree, LOW);
    delay(200-delayTime);

    digitalWrite(ledTwo, HIGH);
    delay(200-delayTime);
    digitalWrite(ledTwo, LOW);
    delay(200-delayTime);

    digitalWrite(led, HIGH);
    delay(200-delayTime);
    digitalWrite(led, LOW);
    delay(200-delayTime);

    delayTime += 20;
  }
  
    delayTime = 0;

    for(int i = 0; i < 5; i++)
    {
    digitalWrite(led, HIGH);   
    digitalWrite(ledTwo, HIGH);  
    digitalWrite(ledThree, HIGH);   
    digitalWrite(ledFour, HIGH);    
    digitalWrite(ledFive, HIGH);

    delay(80);
    digitalWrite(led,LOW);
    delay(80);
    digitalWrite(ledTwo, LOW);
    delay(80);
    digitalWrite(ledThree,LOW);
    delay(80);
    digitalWrite(ledFour,LOW);
    delay(80);
    digitalWrite(ledFive,LOW);
    delay(80);

    digitalWrite(ledFive, HIGH);   
    digitalWrite(ledFour, HIGH);  
    digitalWrite(ledThree, HIGH);   
    digitalWrite(ledTwo, HIGH);    
    digitalWrite(led, HIGH);

    delay(80);
    digitalWrite(ledFive,LOW);
    delay(80);
    digitalWrite(ledFour, LOW);
    delay(80);
    digitalWrite(ledThree,LOW);
    delay(80);
    digitalWrite(ledTwo,LOW);
    delay(80);
    digitalWrite(led,LOW);
    delay(80);
    }

   delay(500);

    for(int i = 0; i < 3; i++)
    {
      greenFlash();
    }
    for(int i = 0; i < 3; i++)
    {
      redFlash();
    }

    for(int i = 0; i < 5; i++)
    {
      greenFlash();
      redFlash();
    }

    for(int i = 0; i < 3; i++)
    {
      leftFlash();
      rightFlash();
    }

    for(int i = 0; i < 3; i++)
    {
      centerFlash();
    }

    for(int i = 0; i < 40; i++)
    {
     randyTwo = random(1,6);
     if(randyTwo == 1)
     {
      greenFlash();
     }
     else if(randyTwo == 2)
     {
      redFlash();
     }
     else if(randyTwo == 3)
     {
      leftFlash();
     }
     else if(randyTwo == 4)
     {
      rightFlash();
     }
     else
     {
      centerFlash();
     }
    }
    
    randomFlashing();
}

 
 
 void greenFlash()
   {
   digitalWrite(led, HIGH);
   digitalWrite(ledThree, HIGH);
   digitalWrite(ledFive, HIGH);
   delay(100);
   digitalWrite(led, LOW);
   digitalWrite(ledThree, LOW);
   digitalWrite(ledFive, LOW);
   delay(100);
   }
 void redFlash()
   {
   digitalWrite(ledTwo, HIGH);
   digitalWrite(ledFour, HIGH);
   delay(100);
   digitalWrite(ledTwo, LOW);
   digitalWrite(ledFour, LOW);
   delay(100);
   }
   
 void leftFlash()
   {
   digitalWrite(led, HIGH);
   digitalWrite(ledTwo, HIGH);
   delay(100);
   digitalWrite(led, LOW);
   digitalWrite(ledTwo, LOW);
   }
 void rightFlash()
   {
   digitalWrite(ledFour, HIGH);
   digitalWrite(ledFive, HIGH);
   delay(100);
   digitalWrite(ledFour, LOW);
   digitalWrite(ledFive, LOW);
   }
 void centerFlash()
   {
    digitalWrite(ledThree, HIGH);
    delay(100);
    digitalWrite(ledThree, LOW);
   }
   
 void randomFlashing()
 {
    for(int i = 0; i < 80; i++);
    {
      randy = random(9,14);

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
 }
    


