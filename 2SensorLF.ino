/*
 * Basic code for Arduino based Line Follower with 2 sensors. 
 * Follows a black line on a white surface.  
 * Author: Jayesh Saraf
 */

const int Lsensor = 5;
const int Rsensor = 6;
const int LmotorF = 8;                            //High output on LmotorF will move the motor forward.
const int LmotorB = 9;                            //High output on LmotorB will move the motor backward.
const int RmotorF = 10;
const int RmotorB = 11;

void setup()
{ pinMode(Lsensor,INPUT);
  pinMode(Rsensor,INPUT);
  pinMode(LmotorF,OUTPUT);
  pinMode(LmotorB,OUTPUT);
  pinMode(RmotorF,OUTPUT);
  pinMode(RmotorB,OUTPUT);
}

void loop()
{ if(digitalRead(Lsensor) == HIGH && digitalRead(Rsensor) == LOW)          //When left sensor is on the black line. 
    { digitalWrite(LmotorF,LOW);
      digitalWrite(LmotorB,HIGH);
      digitalWrite(RmotorF,HIGH);
      digitalWrite(RmotorB,LOW);
    }
   
  else if(digitalRead(Lsensor) == LOW && digitalRead(Rsensor) == HIGH)      //When right sensor is on the black line. 
    { digitalWrite(LmotorF,HIGH);
      digitalWrite(LmotorB,LOW);
      digitalWrite(RmotorF,LOW);
      digitalWrite(RmotorB,HIGH);
    }
    
  else if(digitalRead(Lsensor) == LOW && digitalRead(Rsensor) == LOW)        //None of the sensors are on the black line.
    { digitalWrite(LmotorF,HIGH); 
      digitalWrite(LmotorB,LOW);
      digitalWrite(RmotorF,HIGH);
      digitalWrite(RmotorB,LOW);
    }
  
  else
    { digitalWrite(LmotorF,LOW); 
      digitalWrite(LmotorB,LOW);
      digitalWrite(RmotorF,LOW);
      digitalWrite(RmotorB,LOW);
