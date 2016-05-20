

int buttonPin = 2;
int LEDPin = 13;

void setup() {
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(LEDPin,OUTPUT);
  
  Keyboard.begin();
  
  // put your setup code here, to run once:

}

void loop() {
  
  if (digitalRead(buttonPin)==LOW){
    digitalWrite(LEDPin,HIGH);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_F5);
    delay(100);
    Keyboard.releaseAll();
    delay(200);
  } else {
    digitalWrite(LEDPin,LOW);
  }
  delay(10);

  // put your main code here, to run repeatedly:

}
