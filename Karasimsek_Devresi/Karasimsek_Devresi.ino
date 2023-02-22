// black lightning app
const int time = 25;

void setup() {

  for(int ledPin=8; ledPin<13; ledPin++){
    pinMode(ledPin,OUTPUT);
  }
}

void loop() {

  for(int ledPin=8; ledPin<13; ledPin++){
    digitalWrite(ledPin,HIGH);
    delay(time);
    digitalWrite(ledPin,LOW);
  }
  for(int ledPin=12; ledPin>7; ledPin--){
    digitalWrite(ledPin,HIGH);
    delay(time);
    digitalWrite(ledPin,LOW);
  }
}
