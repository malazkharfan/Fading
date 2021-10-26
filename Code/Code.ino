// Fading
//
// External LED should be fading after being plugged 

// Constants Variables 
const int LED_PIN=6;
const int MAX_BRIGHTNESS=255;
const int MIN_BRIGHTNESS=0;
const int WAIT=30;

// Variables
int brightness=0;
int fadeAmount=-1;

void setup() {
  // pin6 has been declared as an output.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // if the brightness is greater/equal to Max_Brightness or if the brightness is less/equal to Min_Brightness.
  if (brightness >= MAX_BRIGHTNESS || brightness <=MIN_BRIGHTNESS) {
     fadeAmount= -fadeAmount; // then fadeAmount =-1*fadeAmount.
  }

  // the brightness is the brightness variable + the fadeAmount.
  brightness=brightness+fadeAmount;
    
  // LED_PIN will light based on the brightness vlaue
  analogWrite(LED_PIN, brightness);

  delay(WAIT); // wait time between every pulse
}
