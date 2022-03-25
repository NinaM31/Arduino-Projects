int LEDPin = 8;
int buttonPin = 12;
int buttonRead ;
int LEDstate = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonRead = digitalRead(buttonPin);
  delay(250);
  
  if(buttonRead == 0 ){
    if(LEDstate == 0){
      LEDstate = 1;
      digitalWrite(LEDPin, HIGH);
    }else{
      LEDstate = 0;
      digitalWrite(LEDPin, LOW);
    }
  }
  Serial.println(buttonRead);
  
   
}
