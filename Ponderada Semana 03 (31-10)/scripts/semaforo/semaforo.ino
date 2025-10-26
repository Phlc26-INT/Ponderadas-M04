int r = 11;
int y = 10;
int g = 9;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop()
{
  digitalWrite(r, HIGH); 
  delay(6000);        
  digitalWrite(r, LOW); 
  digitalWrite(g, HIGH); 
  delay(4000);        
  digitalWrite(g, LOW); 
  digitalWrite(y, HIGH); 
  delay(2000);        
  digitalWrite(y, LOW); 
}
  
