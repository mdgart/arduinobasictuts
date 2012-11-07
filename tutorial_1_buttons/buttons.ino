/*
  Buttons tutorial
  Created 2012-11-04 by Mauro De Giorgi   
    
  This code is based on SparkFun Inventor's Kit - Example sketch 05  
  This kit is a great way to start a learnig Arduino  
*/

// First we'll set up constants for the pin numbers.
// This will make it easier to follow the code below.

const int button1Pin = 2;  // pushbutton 1 pin
const int ledPin =  13;    // LED pin  
int ledState = HIGH; 
int previous = LOW; 

void setup()
{    
  // Set up the pushbutton pin to be an input:
  pinMode(button1Pin, INPUT);

  // Set up the LED pin to be an output:
  pinMode(ledPin, OUTPUT); 
  
  //Serial.begin(9600);    
}


void loop()
{
  int buttonState; 
    
  buttonState = digitalRead(button1Pin); 
 
  if (buttonState == LOW && previous == LOW) // pushing button 
  {
   if (ledState == HIGH){   
      ledState = LOW;
      //Serial.println(ledState); 
    }
    else {
      ledState = HIGH;
      //Serial.println(ledState); 
    }
  }
  
  digitalWrite(ledPin, HIGH);  // turn the LED on
  previous = buttonState;	
}