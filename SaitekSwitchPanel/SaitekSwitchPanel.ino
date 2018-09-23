#include <Keyboard.h>

const int masterPin = 0;  
const int alternatorPin = 1;
const int avionicsPin = 2;
const int pumpPin = 3;
const int deicePin = 4;
const int pitotPin = 5;

const int panelPin = 6;
const int beaconPin = 7;
const int navPin = 8;
const int strobePin = 9;
const int taxiPin = 10;
const int landingPin = 16;

const int gearPin = 14;

const int magOffPin = 15;
const int magOnePin = 18;
const int magTwoPin = 19;
const int magBothPin = 20;
const int magStartPin = 21;

int magLevel = -1;

void setup() {
  pinMode(masterPin, INPUT);
  digitalWrite(masterPin, HIGH);
  pinMode(alternatorPin, INPUT);
  digitalWrite(alternatorPin, HIGH);
  pinMode(avionicsPin, INPUT);
  digitalWrite(avionicsPin, HIGH);
  pinMode(pumpPin, INPUT);
  digitalWrite(pumpPin, HIGH);
  pinMode(deicePin, INPUT);
  digitalWrite(deicePin, HIGH);
  pinMode(pitotPin, INPUT);
  digitalWrite(pitotPin, HIGH);

  pinMode(panelPin, INPUT);
  digitalWrite(panelPin, HIGH);
  pinMode(beaconPin, INPUT);
  digitalWrite(beaconPin, HIGH);
  pinMode(navPin, INPUT);
  digitalWrite(navPin, HIGH);
  pinMode(strobePin, INPUT);
  digitalWrite(strobePin, HIGH);
  pinMode(taxiPin, INPUT);
  digitalWrite(taxiPin, HIGH);
  pinMode(landingPin, INPUT);
  digitalWrite(landingPin, HIGH);
  
  pinMode(gearPin, INPUT);
  digitalWrite(gearPin, HIGH);

  pinMode(magOffPin, INPUT);
  digitalWrite(magOffPin, HIGH);
  pinMode(magOnePin, INPUT);
  digitalWrite(magOnePin, HIGH);
  pinMode(magTwoPin, INPUT);
  digitalWrite(magTwoPin, HIGH);
  pinMode(magBothPin, INPUT);
  digitalWrite(magBothPin, HIGH);
  pinMode(magStartPin, INPUT);
  digitalWrite(magStartPin, HIGH);
  
}

int masterPinState = -1;
int alternatorPinState = -1; 
int avionicsPinState = -1; 
int pumpPinState = -1; 
int deicePinState = -1;
int pitotPinState = -1; 

int panelPinState = -1;
int beaconPinState = -1; 
int navPinState = -1; 
int strobePinState = -1; 
int taxiPinState = -1;
int landingPinState = -1;

int gearPinState = -1; 

int magOffPinState = -1;
int magOnePinState = -1;
int magTwoPinState = -1;
int magBothPinState = -1;
int magStartPinState = -1;

void loop() {
  // read the state of the pushbutton value:
  int cmasterPinState = digitalRead(masterPin);
  int calternatorPinState = digitalRead(alternatorPin);
  int cavionicsPinState = digitalRead(avionicsPin);
  int cpumpPinState = digitalRead(pumpPin);
  int cdeicePinState = digitalRead(deicePin);
  int cpitotPinState = digitalRead(pitotPin);

  int cpanelPinState = digitalRead(panelPin);
  int cbeaconPinState = digitalRead(beaconPin);
  int cnavPinState = digitalRead(navPin);
  int cstrobePinState = digitalRead(strobePin);
  int ctaxiPinState = digitalRead(taxiPin);
  int clandingPinState = digitalRead(landingPin);
  
  int cgearPinState = digitalRead(gearPin);

  int magOffPinState = digitalRead(magOffPin);
  int magOnePinState = digitalRead(magOnePin);
  int magTwoPinState = digitalRead(magTwoPin);
  int magBothPinState = digitalRead(magBothPin);
  int magStartPinState = digitalRead(magStartPin);
  
  if( masterPinState != cmasterPinState ){ // master battery: shift-m
    masterPinState = cmasterPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('m');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( alternatorPinState != calternatorPinState ){ // alternator: ctrl-shift-m
    alternatorPinState = calternatorPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('m');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( avionicsPinState != cavionicsPinState ){ // avionics: ctrl-shift-q
    avionicsPinState = cavionicsPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('q');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( pumpPinState != cpumpPinState ){ // fuel pump: ctrl-shift-p
    pumpPinState = cpumpPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('p');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( deicePinState != cdeicePinState ){ // de-ice: ctrl-shift-d
    deicePinState = cdeicePinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('d');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( pitotPinState != cpitotPinState ){ // pitot heat: shift-h
    pitotPinState = cpitotPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('h');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( panelPinState != cpanelPinState ){ // panel light: shift-l
    panelPinState = cpanelPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll(); 
  }
  
  if( beaconPinState != cbeaconPinState ){ // beacon light: CTRL+SHIFT+Z
    beaconPinState = cbeaconPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('z');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( navPinState != cnavPinState ){ // nav light : CTRL+SHIFT+T
    navPinState = cnavPinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('T');
    delay(100);
    Keyboard.releaseAll(); 
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('9');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( strobePinState != cstrobePinState ){ // strobe light : CTRL+SHIFT+U
    strobePinState = cstrobePinState;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('U');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( taxiPinState != ctaxiPinState ){ // taxi light : CTRL+F3
    taxiPinState = ctaxiPinState;
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F3);
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( landingPinState != clandingPinState ){ // landing light : CTRL+L
    landingPinState = clandingPinState;
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll(); 
  }
  
  if( gearPinState != cgearPinState ){ // landing gear: g
    gearPinState = cgearPinState;
    Keyboard.press('g');
    delay(100);
    Keyboard.releaseAll(); 
  }

  if( magLevel != -1 ){
    if( magLevel == 0 ){
      if( magOnePinState == LOW ){
        Keyboard.press('m');
        delay(100);
        Keyboard.releaseAll(); 
        Keyboard.press('+');
        delay(100);
        Keyboard.releaseAll(); 
        magLevel = 1;
      }
    }else if( magLevel == 1 ){
      if( magOffPinState == LOW ){
        Keyboard.press('m');
        delay(100);
        Keyboard.releaseAll(); 
        Keyboard.press('-');
        delay(100);
        Keyboard.releaseAll(); 
        magLevel = 0;
      }else if( magTwoPinState == LOW ){
        Keyboard.press('m');
        delay(100);
        Keyboard.releaseAll(); 
        Keyboard.press('+');
        delay(100);
        Keyboard.releaseAll(); 
        magLevel = 2;
      }
    }else if( magLevel == 2 ){
      if( magOnePinState == LOW ){
        Keyboard.press('m');
        delay(100);
        Keyboard.releaseAll(); 
        Keyboard.press('-');
        delay(100);
        Keyboard.releaseAll(); 
        magLevel = 1;
      }else if( magBothPinState == LOW ){
        Keyboard.press('m');
        delay(100);
        Keyboard.releaseAll(); 
        Keyboard.press('+');
        delay(100);
        Keyboard.releaseAll(); 
        magLevel = 3;
      }
    }else if( magLevel == 3 ){
      if( magTwoPinState == LOW ){
        Keyboard.press('m');
        delay(100);
        Keyboard.releaseAll(); 
        Keyboard.press('-');
        delay(100);
        Keyboard.releaseAll(); 
        magLevel = 2;
      }else if( magStartPinState == LOW ){
        Keyboard.press('m');
        delay(100);
        Keyboard.releaseAll(); 
        Keyboard.press('+');
        delay(100);
        Keyboard.releaseAll(); 
      }
    }
  }else{
    // wait until we hit the mag 1;
    if( magOnePinState == LOW ){
      Keyboard.press('m');
      delay(100);
      Keyboard.releaseAll(); 
      Keyboard.press('+');
      delay(100);
      Keyboard.releaseAll(); 
      magLevel = 1;
    }
  }
}
