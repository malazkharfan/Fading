// Fading
//
// External LED should be fading after being plugged in.

// Variables 
const int ledPin=6;
const int MAX_BRIGHTNESS=255;
const int MIN_BRIGHTNESS=0;
int brightness=0;
int fadeAmount=1;


void setup() {
  // pin6 has been declared as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // ledPin will start as 0, which is the brightness value. 
  analogWrite(ledPin, brightness);

  //change the brightness
  brightness=brightness+fadeAmount;

  //||
    if (brightness >= MAX_BRIGHTNESS || brightness <=MIN_BRIGHTNESS) {
      fadeAmount= -fadeAmount;
    }
    delay(30);
}
