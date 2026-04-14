const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Adjust this to change the speed (lower is faster)
//int fadeSpeed = 30; 

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void setColor(int r, int g, int b) {
  analogWrite(redPin, 255 - r);
  analogWrite(greenPin, 255 - g);
  analogWrite(bluePin, 255 - b);
}

void loop() {
  int r, g, b;

  // Color 1
  {
    setColor(225, 72, 100);
    delay(1000);
  }

 // Color 2
  {
    setColor(0, 225, 0);
    delay(1000);
  }

 // Color 3
  {
    setColor(0, 0, 225);
    delay(1000);
  }
}
