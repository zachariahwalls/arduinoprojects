/*
  Light Switch
  If you press Button1, LED should come on
  If you press Button2, LED should turn off
  
  Button1 connected to Pin 3
  Button2 connected to Pin 4
  LED connected to Pin 7
  
*/

//Set Pin Numbers
//set Button1 to pin3
int Button1 = 3;
//set Button2 to pin4
int Button2 = 4;
//set LED to pin7
int LED = 7;

//set state variables for buttons
int ButtonOneState = 0;
int ButtonTwoState = 0;

//Setup Routine will set Button1 and Button2 as INPUT, and LED as OUTPUT
void setup() {
    pinMode(Button1,INPUT);
    pinMode(Button2,INPUT);
    pinMode(LED,OUTPUT);
    Serial.begin(9600);
    
}

void loop() {
  //check state of butotns
  ButtonOneState = digitalRead(Button1);
  ButtonTwoState = digitalRead(Button2);
  //If Button One Pressed, turn on LED
  if (ButtonOneState == HIGH) {
    digitalWrite(LED, HIGH);
    Serial.write("Turning on");
  }
  //if Button Two Pressed, turn off LED
  else if (ButtonTwoState == HIGH) {
    digitalWrite(LED, LOW);
    Serial.write("Turning off");
  }
  Serial.write("Working");
}
