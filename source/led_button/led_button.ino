int ledPin = 10;
int buttonPin = 11;


void setup (){
  pinMode (ledPin, OUTPUT);
  pinMode (buttonPin, INPUT);
  
}

void loop(){
  if (digitalRead (buttonPin) == HIGH) {
   digitalWrite(ledPin, HIGH);
  } else {
  digitalWrite(ledPin, LOW);
  }
   
}











