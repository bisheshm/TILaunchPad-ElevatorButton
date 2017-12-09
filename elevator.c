const int buttonUp =  7;                     // the number of the first external pushbutton pin
const int buttonDown = 9;                 // the number of the second external pushbutton pin
const int Gled1 = GREEN_LED;      // the number of the LED pin
const int Rled1 = RED_LED;           // the number of the LED pin
const int Gled2 = 4;                           // the number of the LED pin
const int Rled2 = 12;                         // the number of the LED pin

// variables will change:
int buttonStateUp = 0;         // variable for reading the pushbutton status
int buttonStateDown = 0;

void setup() 
{
  // initialize the LED pin as an output:
  pinMode(Gled1, OUTPUT);
  pinMode(Rled1, OUTPUT);
  pinMode(Gled2, OUTPUT);
  pinMode(Rled2, OUTPUT);

  // initialize the pushbutton pin as an inpu_pullupt:
  pinMode(buttonStateUp, INPUT_PULLUP);  
  pinMode(buttonStateDown, INPUT_PULLUP);  
}

void loop()
{
  
  digitalWrite(Gled1, LOW);                   // turn the LED on low
  digitalWrite(Rled1, LOW);                   // turn the LED on low
  digitalWrite(Gled2, LOW);                   // turn the LED on low
  digitalWrite(Rled2, LOW);                   // turn the LED on low

  buttonStateUp = digitalRead(buttonUp);  // read the state of the pushbutton value

  // checks if the pushbutton 1st button for the up arrow is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonStateUp == HIGH) 
  {     
    // turn LED on:    
    digitalWrite(Gled1, HIGH);
    digitalWrite(Rled1, HIGH); 
  } 
  else 
  {
    // turn LED off:
    digitalWrite(Gled1, LOW); 
    digitalWrite(Rled1, LOW);
  }
  
  // read the state of the pushbutton value:
  buttonStateDown = digitalRead(buttonDown);

  // checks if the pushbutton 2nd for the down arrow is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonStateDown == HIGH) 
  {     
    // turn LED on:    
    digitalWrite(Gled2, HIGH);
    digitalWrite(Rled2, HIGH); 
  } 
  else 
  {
    // turn LED off:
    digitalWrite(Gled2, LOW);
    digitalWrite(Rled1, LOW); 
  }
}
