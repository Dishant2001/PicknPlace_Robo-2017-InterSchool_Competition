void forward()
{
  
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  
}

}
void backward()
{
  
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  
}
void stop1()
{
  for(int i=2;i<10;i++)
  digitalWrite(i,LOW); 
}
void right()
{
 
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  


}
void left()
{
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  

}

}
void up()
{
  
  digitalWrite(6,HIGH);
  
  digitalWrite(7,LOW);
 
  

}
void down()
{
 
  digitalWrite(6,LOW);
  
  digitalWrite(7,HIGH);
 
 
}
void grip()
{
  
  digitalWrite(8,HIGH);
  
  digitalWrite(9,LOW);
 
  
}
void leave()
{
  digitalWrite(8,LOW);
  
  digitalWrite(9,HIGH);
 
}
void setup() {
  // put your setup code here, to run once:
for(int i=2;i<13;i++)
{
  pinMode(i,OUTPUT);
}
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  int a=Serial.read();
  if(a==0)
  {
  forward();
  }
  else if(a==1)
  { left();}
  else if(a==3)
  { right();}
  else if(a==4)
  { backward();}
  else if(a==5)
  { up();}
  else if(a==6)
  { grip();}
  else if(a==8)
  { leave();}
  else if(a==9)
  { down();}
  else if (a==10)
  {stop1();}
}
}
