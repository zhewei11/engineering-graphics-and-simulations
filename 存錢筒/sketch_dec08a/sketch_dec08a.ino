ㄕconst int In1=4;
const int In2=5;
int IR_object=6;
const int ENT=9;
int IR;

void setup()
{
  Serial.begin(9600);
  pinMode(IR_object , INPUT);
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(ENT,OUTPUT);
}
void loop()
{
  IR=digitalRead(IR_object);
  Serial.print(IR);
  delay(500);
  if(IR==LOW){
    digitalWrite(ENT,250 );
    digitalWrite(In1,HIGH );
    digitalWrite(In2,LOW );
    
    
    delay(2000);
  }
    
  else{
    digitalWrite(ENT,0);
    digitalWrite(In1,LOW);
    digitalWrite(In2,LOW);
    
    }   
}
