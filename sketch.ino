int led = 2;
int buzzer = 4;
int button = 15;

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop()
 {
  int buttonState = digitalRead(button);

  if(buttonState == LOW) 
  {   
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } 
  else 
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
}