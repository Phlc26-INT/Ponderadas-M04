int r = 9;
int y = 10;
int g = 11;

int* pr = &r;
int* py = &y;
int* pg = &g;

void semaforo(int* pin, long ms) {
  digitalWrite(*pin, HIGH);
  delay(ms);
  digitalWrite(*pin, LOW);
}

void setup() {
  pinMode(*pr, OUTPUT);
  pinMode(*py, OUTPUT);
  pinMode(*pg, OUTPUT);
}

void loop() {
  semaforo(pr, 6000);  
  semaforo(pg, 4000);  
  semaforo(py, 2000);  
}
