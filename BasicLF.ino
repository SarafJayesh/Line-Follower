/*
 * Basic code for Arduino based Line Follower with 2 sensors. 
 * Initialization on 25/2/16
 * Author: Jayesh Saraf
 */

int Lsensor = 4;
int Rsensor = 5;
int LmotorF = 8;                            //High output on LmotorF will move the motor forward.
int LmotorB = 9;                            //High output on LmotorB will move the motor backward.
int RmotorF = 10;
int RmotorB = 11;

void setup()
{ PinMode(Lsensor,INPUT);
  PinMode(Rsensor,INPUT);
  PinMode(LmotorF,OUTPUT);
  PinMode(LmotorB,OUTPUT);
  PinMode(RmotorF,OUTPUT);
  PinMode(RmotorB,OUTPUT);
}

void loop()
{ if(DigitalRead(Lsensor) == HIGH)           //When left sensor is on the black line. 
    { DigitalWrite(RmotorF,HIGH);
      DigitalWrite(LmotorB,HIGH);
    }
   
  else if(DigitalRead(Rsensor) == HIGH)      //When right sensor is on the black line. 
    { DigitalWrite(LmotorF,HIGH);
      DigitalWrite(RmotorB,HIHG);
    }
    
  else                                       //None of the sensor is on the black line.
    { DigitalWrite(LmotorF,HIGH);             
      DigitalWrite(RmotorF,HIGH);
    }
}    
    
    
    
    
