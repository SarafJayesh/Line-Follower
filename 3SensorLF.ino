/* 
 * Program for Ardunio based Line follower robot with 3 sensors.
 * Follows a black line on white surface.
 * Works when infrared sensors gives HIGH output on black line. 
 * Author : Jayesh Saraf
 */
 
int Lsensor = digitalRead(5);
int Csensor = digitalRead(6);
int Rsensor = digitalRead(7); 
const int LmotorF = 8; 
const int LmotorB = 9;
const int RmotorF = 10;
const int RmotorB = 11;

void setup()
{ pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT); 
  pinMode(LmotorF, OUTPUT);
  pinMode(LmotorB, OUTPUT);
  pinMode(RmotorF, OUTPUT);
  pinMode(RmotorB, OUTPUT);
}
  
void loop()
{ if(Lsensor == HIGH && Csensor == LOW && Rsensor == LOW)                //Left Turn
    { digitalWrite(LmotorF,LOW);
      digitalWrite(LmotorB,LOW);
      digitalWrite(RmotorF,HIGH);
      digitalWrite(RmotorB,LOW);
    }

  else if(Lsensor == HIGH && Csensor == HIGH && Rsensor == LOW)          //Hard Left Turn
    { digitalWrite(LmotorF,LOW);
      digitalWrite(LmotorB,HIGH);
      digitalWrite(RmotorF,HIGH);
      digitalWrite(RmotorB,LOW);
    }  
    
  else if(Lsensor == LOW && Csensor == LOW && Rsensor == HIGH)           //Right Turn
    { digitalWrite(LmotorF,HIGH);
      digitalWrite(LmotorB,LOW);
      digitalWrite(RmotorF,LOW);
      digitalWrite(RmotorB,LOW);
    }
    
  else if(Lsensor == LOW && Csensor == HIGH Rsensor == HIGH)             //Hard Right Turn
    { digitalWrite(LmotorF,HIGH);
      digitalWrite(LmotorB,LOW);
      digitalWrite(RmotorF,LOW);
      digitalWrite(RmotorB,HIGH);
    }
    
  else                                                                   //Forward
    { digitalWrite(LmotorF,HIGH);
      digitalWrite(LmotorB,LOW);
      digitalWrite(RmotorF,HIGH);
      digitalWrite(RmotorB,LOW);
    }
}
