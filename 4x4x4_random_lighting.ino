int LED_1 = 0;
int LED_2 = 1;
int LED_3 = 2;
int LED_4 = 3;
int LED_5 = 4;
int LED_6 = 5;
int LED_7 = 6;
int LED_8 = 7;
int LED_9 = 8;
int LED_10 = 9;
int LED_11 = 10;
int LED_12 = 11;
int LED_13 = 12;
int LED_14 = 13;
int LED_15 = A4;
int LED_16 = A5;

long randomNumber;

void setup() {
  
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
  pinMode(LED_9, OUTPUT);
  pinMode(LED_10, OUTPUT);
  pinMode(LED_11, OUTPUT);
  pinMode(LED_12, OUTPUT);
  pinMode(LED_13, OUTPUT);
  pinMode(LED_14, OUTPUT);
  pinMode(LED_15, OUTPUT);
  pinMode(LED_16, OUTPUT);

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);

  randomSeed(analogRead(A5));

  digitalWrite(A0,LOW);
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A3,LOW);

}

void loop() {
  randomNumber = random(0, 17);
//  digitalWrite(randomNumber);
  digitalWrite(randomNumber,HIGH);
  delay(150);
  digitalWrite(randomNumber, LOW);

}
