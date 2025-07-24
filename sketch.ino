#define pot 2

#define buzzer 12

void setup() {

  Serial.begin(115200);


}

void loop() {

  int po=analogRead(pot);

  Serial.println(po);

  if(po > 2000){

    digitalWrite(buzzer, HIGH);

  }else{

    digitalWrite(buzzer, LOW);

  }

  delay(10); 

}

 