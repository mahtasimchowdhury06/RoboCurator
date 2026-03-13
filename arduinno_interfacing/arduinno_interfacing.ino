char sms;

void setup(){        //set the motor pin as output and the sensor pin as input
 Serial.begin(9600);
}

void loop(){
   if(Serial.available()!= 0){
    sms = Serial.read();
  }
  if(sms == 'A')
  {
    digitalWrite(8,HIGH);
  }
  else if(sms == 'B')
  {
    digitalWrite(8,LOW);
  }
}
