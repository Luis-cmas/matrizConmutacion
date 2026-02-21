int salida1=8;
int salida2=9;
int salida3=10;
int salida4=11;
int salida5=12;
void setup() {
  // put your setup code here, to run once:
pinMode(salida1,OUTPUT);
pinMode(salida2,OUTPUT);
pinMode(salida3,OUTPUT);
pinMode(salida4,OUTPUT);
pinMode(salida5,OUTPUT);
digitalWrite(salida1,LOW);
digitalWrite(salida2,LOW);
digitalWrite(salida3,LOW);
digitalWrite(salida4,LOW);
digitalWrite(salida5,LOW);
}

void loop() {
 delay(100);
 digitalWrite(salida1,HIGH);
 
 digitalWrite(salida5,LOW);
 delay(200);
 digitalWrite(salida1,LOW);
 digitalWrite(salida2,HIGH);
 delay(200);
 digitalWrite(salida1,HIGH);
 digitalWrite(salida2,LOW);
 digitalWrite(salida3,HIGH);
 delay(200);
 digitalWrite(salida1,LOW);
 digitalWrite(salida2,HIGH);
 digitalWrite(salida3,LOW);
 digitalWrite(salida4,HIGH);
 delay(200);
 digitalWrite(salida1,HIGH);
 digitalWrite(salida2,LOW);
 digitalWrite(salida3,HIGH);
 digitalWrite(salida4,LOW);
 digitalWrite(salida5,HIGH); 
 
}
  
