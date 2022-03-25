int analogPin = A3;
int lightVal;
int dt = 1000;
int pinLight = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
  pinMode(pinLight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(analogPin);
  Serial.println(lightVal);

  if(lightVal <= 40 ){
    digitalWrite(pinLight, HIGH);
  }else{
    digitalWrite(pinLight, LOW);
  }
  
  delay(dt);
}
