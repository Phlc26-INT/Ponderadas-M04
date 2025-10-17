int rgb_red = 11;
int rgb_blue = 10;
int rgb_green = 9;
int led = 13;
void setup() {

  pinMode(rgb_red, OUTPUT);
  pinMode(rgb_blue, OUTPUT);
  pinMode(rgb_green, OUTPUT);
  pinMode(led, OUTPUT);
}

 void loop()
 {
   // Letra P
   digitalWrite(led, HIGH); 
   delay(150);        
   digitalWrite(led, LOW);  
   delay(150);
   for (int i = 0; i < 2; i++) {
     digitalWrite(led, HIGH); 
     delay(500);       
     digitalWrite(led, LOW);  
     delay(500);        
   }
   digitalWrite(led, HIGH); 
   delay(150);        
   digitalWrite(led, LOW);  
   delay(150);

   delay(500);

   // Letra E
   digitalWrite(led, HIGH); 
   delay(150);       
   digitalWrite(led, LOW);  
   delay(150); 

   delay(500);

   // Letra D
   digitalWrite(led, HIGH); 
   delay(500);        
   digitalWrite(led, LOW);  
   delay(500);
   for (int i = 0; i < 2; i++) {
     digitalWrite(led, HIGH); 
     delay(150);        
     digitalWrite(led, LOW);  
     delay(150);
   }
   delay(500);

   // Letra R
   digitalWrite(led, HIGH); 
   delay(150);        
   digitalWrite(led, LOW);  
   delay(150);
   digitalWrite(led, HIGH); 
   delay(500);       
   digitalWrite(led, LOW);  
   delay(500);        
   digitalWrite(led, HIGH); 
   delay(150);        
   digitalWrite(led, LOW);  
   delay(150);

   delay(500);

  // Letra O
   for (int i = 0; i < 3; i++) {
     digitalWrite(led, HIGH); 
     delay(500);       
     digitalWrite(led, LOW);  
     delay(500);        
   }
  
 delay(2000);
 }