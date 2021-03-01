#define S1_Pin_1 7
#define S1_Pin_2 8
#define S1_Pin_3 9
#define S1_Pin_4 10
#define S2_Pin_1 6
#define S2_Pin_2 5
#define S2_Pin_3 4
#define S2_Pin_4 3
#include<Servo.h>
int  trigPin = 11;
int  echoPin = 12; 
int  led = 13 ;

int relay = 0 ;

float distance;


Servo servo;

int step_no = 0;
int i = 0;
int Start = 0;
int j = 128;

void setup() {

   
   pinMode(led, OUTPUT);
  pinMode(S1_Pin_1, OUTPUT);
  pinMode(S1_Pin_2, OUTPUT);
  pinMode(S1_Pin_3, OUTPUT);
  pinMode(S1_Pin_4, OUTPUT);
  pinMode(S2_Pin_1, OUTPUT);
  pinMode(S2_Pin_2, OUTPUT);
  pinMode(S2_Pin_3, OUTPUT);
  pinMode(S2_Pin_4, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT); 
  servo.attach(2);
  servo.write(90);

 
 
  
  

  pinMode(trigPin, OUTPUT); // trig pin will have pulses output
  pinMode(echoPin, INPUT); // echo pin should be input to get pulse width
  
}

void loop() {


  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  
  delay(10);
 
 if((distance<=10)) 
  {
    Start = 1;
    digitalWrite(led, HIGH);
}
   else if(distance>10)
 {
     digitalWrite(led, LOW);
     Start = 0;
   }

//delay(500);
    


if(Start == 1){
  if(i != 35){
    for(i = 0; i<35; i++){
      digitalWrite(S1_Pin_1, HIGH);
      digitalWrite(S1_Pin_2, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_4, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_2, HIGH);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_4, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_2, LOW);
      digitalWrite(S1_Pin_3, HIGH);
      digitalWrite(S1_Pin_4, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_2, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_4, HIGH);
      delay(2);
    }
  }
      delay(1000);
      digitalWrite(relay, HIGH);
      servo.write(55);
      
      delay(1000);

      servo.write(90);

      delay(1000);


        if(i != 0){
    for(i = 35; i>0; i--){
      digitalWrite(S1_Pin_1, HIGH);
      digitalWrite(S1_Pin_4, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_2, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_4, HIGH);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_2, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_4, LOW);
      digitalWrite(S1_Pin_3, HIGH);
      digitalWrite(S1_Pin_2, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_4, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_2, HIGH);
      delay(2);
    }
        }

       delay(1000);

if(j != 0){
    for(j = 128; j>0; j--){
      digitalWrite(S2_Pin_1, HIGH);
      digitalWrite(S2_Pin_4, LOW);
      digitalWrite(S2_Pin_3, LOW);
      digitalWrite(S2_Pin_2, LOW);
      delay(2);
      digitalWrite(S2_Pin_1, LOW);
      digitalWrite(S2_Pin_4, HIGH);
      digitalWrite(S2_Pin_3, LOW);
      digitalWrite(S2_Pin_2, LOW);
      delay(2);
      digitalWrite(S2_Pin_1, LOW);
      digitalWrite(S2_Pin_4, LOW);
      digitalWrite(S2_Pin_3, HIGH);
      digitalWrite(S2_Pin_2, LOW);
      delay(2);
      digitalWrite(S2_Pin_1, LOW);
      digitalWrite(S2_Pin_4, LOW);
      digitalWrite(S2_Pin_3, LOW);
      digitalWrite(S2_Pin_2, HIGH);
      delay(2);
    }
     }


        
      
    delay(1000);
   
    if(i != 35){
    for(i = 0; i<35; i++){
      digitalWrite(S1_Pin_1, HIGH);
      digitalWrite(S1_Pin_2, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_4, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_2, HIGH);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_4, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_2, LOW);
      digitalWrite(S1_Pin_3, HIGH);
      digitalWrite(S1_Pin_4, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_2, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_4, HIGH);
      delay(2);
    }
    }
      delay(1000);
      
      servo.write(55);
      
      delay(1000);
       digitalWrite(relay, LOW);
      servo.write(90);

      delay(2000);


        if(i != 0){
    for(i = 35; i>0; i--){
      digitalWrite(S1_Pin_1, HIGH);
      digitalWrite(S1_Pin_4, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_2, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_4, HIGH);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_2, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_4, LOW);
      digitalWrite(S1_Pin_3, HIGH);
      digitalWrite(S1_Pin_2, LOW);
      delay(2);
      digitalWrite(S1_Pin_1, LOW);
      digitalWrite(S1_Pin_4, LOW);
      digitalWrite(S1_Pin_3, LOW);
      digitalWrite(S1_Pin_2, HIGH);
      delay(2);
    }

        }
   
     
     if(j != 128){
    for(j = 0; j<128; j++){
      digitalWrite(S2_Pin_1, HIGH);
      digitalWrite(S2_Pin_2, LOW);
      digitalWrite(S2_Pin_3, LOW);
      digitalWrite(S2_Pin_4, LOW);
      delay(2);
      digitalWrite(S2_Pin_1, LOW);
      digitalWrite(S2_Pin_2, HIGH);
      digitalWrite(S2_Pin_3, LOW);
      digitalWrite(S2_Pin_4, LOW);
      delay(2);
      digitalWrite(S2_Pin_1, LOW);
      digitalWrite(S2_Pin_2, LOW);
      digitalWrite(S2_Pin_3, HIGH);
      digitalWrite(S2_Pin_4, LOW);
      delay(2);
      digitalWrite(S2_Pin_1, LOW);
      digitalWrite(S2_Pin_2, LOW);
      digitalWrite(S2_Pin_3, LOW);
      digitalWrite(S2_Pin_4, HIGH);
      delay(2);
    }
      
      }
   

    
  
      }
}
