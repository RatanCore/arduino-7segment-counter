// Segment pins: a, b, c, d, e, f, g
const int segPins[7] = {6, 5, 4, 3, 2, 7, 8};

// Digit common pins
const int digit1 = 10;
const int digit2 = 11;

// Common Anode patterns (0 = ON, 1 = OFF)
const byte digits[10][7] = {
  {0,0,0,0,0,0,1}, // 0
  {1,0,0,1,1,1,1}, // 1
  {0,0,1,0,0,1,0}, // 2
  {0,0,0,0,1,1,0}, // 3
  {1,0,0,1,1,0,0}, // 4
  {0,1,0,0,1,0,0}, // 5
  {0,1,0,0,0,0,0}, // 6
  {0,0,0,1,1,1,1}, // 7
  {0,0,0,0,0,0,0}, // 8
  {0,0,0,0,1,0,0}  // 9
};

int currentNumber = 0;
unsigned long previousMillis = 0;
const long interval = 800;

void setup() {
  for (int i = 0; i < 7; i++) pinMode(segPins[i], OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    currentNumber++;
    if (currentNumber > 9) currentNumber = 0;
  }
  displayNumber(currentNumber);
}

void displayNumber(int num) {
  showDigit(num, digit1);
  delayMicroseconds(2500);
  showDigit(num, digit2);
  delayMicroseconds(2500);
}

void showDigit(int num, int digitPin) {
  digitalWrite(digit1, LOW);
  digitalWrite(digit2, LOW);

  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], digits[num][i]);
  }
  digitalWrite(digitPin, HIGH);
}