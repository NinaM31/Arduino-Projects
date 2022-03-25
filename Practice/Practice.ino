String myColor;
String msg = "pick an LED color:";
String msgRed = "r: Red";
String msgBlue = "b: Blue";
String msgGreen = "g: Green";
String msgNone = "n: None";
String error = "error occured try again ";

int pinRed = 13;
int pinGreen = 12;
int pinBlue = 9;

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
Serial.println(msgRed  + " or " + msgGreen  + " or " +  msgBlue + " or " + msgNone);
while(Serial.available() == 0){}

myColor = Serial.readString();

digitalWrite(pinGreen, LOW);
digitalWrite(pinBlue, LOW);
digitalWrite(pinRed, LOW);

if(myColor == "r"){
  digitalWrite(pinRed, HIGH);
}else if(myColor == "g"){
  digitalWrite(pinGreen, HIGH);
}else if(myColor == "b"){
  digitalWrite(pinBlue, HIGH);
}else if(myColor == "n"){
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, LOW);
  digitalWrite(pinRed, LOW);
}else{
  Serial.println(error);
}
}
