int pinRed = 13;
int pinGreen = 12;
int pinBlue = 11;

String myColor;
String msg = "pick an LED color:";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){}
  myColor = Serial.readString();
  
  digitalWrite(pinRed, LOW);
  digitalWrite(pinBlue, LOW);
  digitalWrite(pinGreen, LOW);
  
  if(myColor == "r"){
    digitalWrite(pinRed, HIGH);
  }else if(myColor == "b"){
    digitalWrite(pinBlue, HIGH);
  }else if(myColor == "g"){
    digitalWrite(pinGreen, HIGH);
  }else if(myColor == "y"){
    analogWrite(pinRed, 255);
    analogWrite(pinBlue, 0);
    analogWrite(pinGreen, 100);
  }else if(myColor == "a"){
    analogWrite(pinRed, 0);
    analogWrite(pinBlue, 255);
    analogWrite(pinGreen, 255);
  }else if(myColor == "v"){
    analogWrite(pinRed, 255);
    analogWrite(pinBlue, 70);
    analogWrite(pinGreen, 0);
  }
}
