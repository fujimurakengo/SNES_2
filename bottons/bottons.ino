
#define DAT 6
#define DATA2   7
#define CLK  8
char botans[12][5]={'B','Y','SEL','STAR','up','down','lef','rig','A','X','L','R'};
void setup(){  
 
  pinMode(DAT,INPUT);
  pinMode(CLK,OUTPUT);
  pinMode(DATA2 ,OUTPUT);
   Serial.begin(9600);
}//20

void loop(){
  
    digitalWrite(DATA2,HIGH);
    digitalWrite(DATA2,LOW);

   for(int clk=0;clk<12;clk++){
     if(digitalRead(DAT) == LOW){
      
       Serial.println(botans[clk]);
                             
    }    
   }
}
