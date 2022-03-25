int lightRead = A3;
int buzzPin = 9;
int lighVal;

int buzzTimeLow;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightRead, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lighVal = analogRead(lightRead);

  Serial.println(lighVal);
  buzzTimeLow = (int)((1000./300.)*lighVal);

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzTimeLow);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzTimeLow);
  
}
