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
{ PinMode(Lsensor,INPUT);
  PinMode(Rsensor,INPUT);
  PinMode(LmotorF,OUTPUT);
  PinMode(LmotorB,OUTPUT);
  PinMode(RmotorF,OUTPUT);
  PinMode(RmotorB,OUTPUT);
}

void loop()
{ if(DigitalRead(Lsensor) == HIGH && DigitalRead(Rsensor) == LOW)          //When left sensor is on the black line. 
    { DigitalWrite(LmotorF,LOW);
      DigitalWrite(LmotorB,HIGH);
      DigitalWrite(RmotorF,HIGH);
      DigitalWrite(RmotorB,LOW);
    }
   
  else if(DigitalRead(Lsensor) == LOW && DigitalRead(Rsensor) == HIGH)      //When right sensor is on the black line. 
    { DigitalWrite(LmotorF,HIGH);
      DigitalWrite(LmotorB,LOW);
      DigitalWrite(RmotorF,LOW);
      DigitalWrite(RmotorB,HIGH);
    }
    
  else if(DigitalRead(Lsensor) == LOW && DigitalRead(Rsensor) == LOW)        //None of the sensors are on the black line.
    { DigitalWrite(LmotorF,HIGH); 
      DigitalWrite(LmotorB,LOW);
      DigitalWrite(RmotorF,HIGH);
      DigitalWrite(RmotorB,LOW);
    }
  
  else
    { DigitalWrite(LmotorF,LOW); 
      DigitalWrite(LmotorB,LOW);
      DigitalWrite(RmotorF,LOW);
      DigitalWrite(RmotorB,LOW);
    }
}    
    
    
    
    
