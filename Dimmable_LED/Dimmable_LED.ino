int upPin = 11;
int downPin = 10;
int LEDPin = 12;
int buzzPin = 9;

int readUp;
int readDown;

int LEDBright = 0;
int buzzDt = 200; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(upPin, INPUT);
  pinMode(downPin, INPUT);
  
  pinMode(LEDPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readUp = digitalRead(upPin);
  readDown = digitalRead(downPin);
  
  Serial.print("Button Up: ");
  Serial.print(readUp);
  Serial.print(", Button Down: ");
  Serial.println(readDown);
  

  if (readUp == 0){
    LEDBright = LEDBright + 10;
    if(LEDBright > 255){
      LEDBright = 255;
      digitalWrite(buzzPin, HIGH);
      delay(buzzDt);
      digitalWrite(buzzPin, LOW);
    }
  }
  
  if (readDown == 0){
    LEDBright = LEDBright - 10; 
    if(LEDBright < 0){
      LEDBright = 0;
      digitalWrite(buzzPin, HIGH);
      delay(buzzDt);
      digitalWrite(buzzPin, LOW);
    }
  }
  
  analogWrite(LEDPin, LEDBright);
}
