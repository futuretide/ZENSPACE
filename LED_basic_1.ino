int LedA = 13;
int LedB = 11;
int LedC = 9;
//basic location of pin//
void Led(int a, int b, int c) {
  digitalWrite(LedA, a);
  digitalWrite(LedB, b);
  digitalWrite(LedC, c);
}
//pin input//
void setup() {
  pinMode(LedA, OUTPUT);
  pinMode(LedB, OUTPUT);
  pinMode(LedC, OUTPUT);
}
// LED function in the below code//
void loop() {
  Led(0, 1, 1);
  delay(1000);

  Led(0, 1, 0);
  delay(1000);

  Led(0, 0, 1);
  delay(1000);
  
  Led (0 ,0, 0,);
  delay (1000)

  Led(1,1,1);
  delay(1000);

  Led(0, 1, 1);
  delay(1000);

  Led(0 ,1, 0);
  delay(1000);

  
}
