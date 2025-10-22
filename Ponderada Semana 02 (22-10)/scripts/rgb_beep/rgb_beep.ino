class Coisa {
  private: 
    const int red = 4;
    const int green = 5;
    const int blue = 3;
    const int buzz = 13;

  public:
  void bip(){
    digitalWrite(buzz, HIGH);
    delay(50);
    digitalWrite(buzz, LOW);
  }
  void l_red(){
    digitalWrite(red, HIGH);
    delay(500);
    digitalWrite(red, LOW);
  } 
  void l_green(){
    digitalWrite(green, HIGH);
    delay(500);
    digitalWrite(green, LOW);
  } 
  void l_blue(){
    digitalWrite(blue, HIGH);
    delay(500);
    digitalWrite(blue, LOW);
  }
  void init(){
    pinMode(4, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(13, OUTPUT);
  }
};

Coisa arduino;


void setup() {
  arduino.init();

}

void loop() {
  arduino.l_green();
  delay(1000);
  arduino.l_red();
  delay(1000);
  arduino.l_blue();
  delay(1000);
  arduino.bip();
  delay(1000);
  
}
