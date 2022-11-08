#include <IRremote.h>
int IRpin=3;
IRrecv IR(IRpin);
decode_results results;
float dFact;
int redPin=6;
int greenPin=9;
int bluePin=10;
int redBright=255;
int greenBright=255;
int blueBright=255;
String myCom;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IR.enableIRIn();
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (IR.decode()==0){
    }
   Serial.println(IR.results.value,HEX);
  delay(50);
  IR.resume(); 
   if(IR.results.value==0xFF02FD){
    myCom="OK";
    Serial.println(myCom);

    }
   if(IR.results.value==0xFF629D){
       myCom="Up";
    Serial.println(myCom);
  }
   
       if(IR.results.value==0xFFA857){
      myCom="Down";
    Serial.println(myCom);
    }
       if(IR.results.value==0xFFC23D){
          myCom="Right";
    Serial.println(myCom);
    }
       if(IR.results.value==0xFF22DD){
          myCom="Left";
    Serial.println(myCom);
    }
       if(IR.results.value==0xFF6897){
      myCom="One";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF9867){
       myCom="Two";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFFB04F){
       myCom="Three";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF30CF){
    
      myCom="Four";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF18E7){
      myCom="Five";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF7A85){
        myCom="Six";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF10EF){
         myCom="Seven";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF38C7){
          myCom="Eight";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF5AA5){
          myCom="Nine";
    Serial.println(myCom);
    }
               if(IR.results.value==0xFF42BD){
         myCom="Star";
    Serial.println(myCom);
    }
           if(IR.results.value==0xFF4AB5){
      myCom="Zero";
    Serial.println(myCom);
    }
       if(IR.results.value==0xFF52AD){
         myCom="Hash";
    Serial.println(myCom);
    
    } 
    if(myCom=="OK"){
      redBright=255;
      greenBright=255;
      blueBright=255;
      dFact=1;
      }
    if(myCom=="Zero"){
      redBright=0;
      greenBright=0;
      blueBright=0;
      dFact=0;
      }
         if(myCom=="One"){
      redBright=255;
      greenBright=0;
      blueBright=0;
      }
    if(myCom=="Two"){
      redBright=0;
      greenBright=255;
      blueBright=0;
     
      }
          if(myCom=="Three"){
      redBright=0;
      greenBright=0;
      blueBright=255;
      
      }
         if(myCom=="Four"){
      redBright=0;
      greenBright=255;
      blueBright=255;
      
      }
        if(myCom=="Five"){
      redBright=255;
      greenBright=0;
      blueBright=150;
      
      }
        if(myCom=="Six"){
      redBright=255;
      greenBright=255;
      blueBright=0;
      
      }
       if(myCom=="Up"){
dFact=dFact*1.3;
if(dFact>1){
  dFact=1;
  }
      }
        if(myCom=="Down"){
     dFact=dFact*0.75;
      
      }
}
