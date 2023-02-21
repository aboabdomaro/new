int Lower_Sensor = 2;
int Upper_Sensor = 3
int Red_Led = 13;
int Green_Led = 12;
int Buzzer = 11

void setup() {
  pinMode(Red_Led, OUTPUT);
  pinMode(Green_Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Lower_Sensor, INPUT);
  pinMode(Upper_Sensor, INPUT);
  //Serial.begin(9600);
}

void loop() {
  int Lower_SensorValue = digitalRead(Lower_Sensor);
  int Upper_SensorValue = digitalRead(Upper_Sensor);
 
  delay(100);
   if ((Lower_SensorValue==LOW)&&(Upper_SensorValue==LOW)){ // LOW MEANS Object Detected
    digitalWrite(Green_Led, HIGH);
  }
  else if ((Lower_SensorValue==LOW)&&(Upper_SensorValue==HIGH)){
    digitalWrite(Red_Led, HIGH);
    digitalWrite(Buzzer, HIGH);
    delay(500);
    digitalWrite(Buzzer, LOW);
    delay(400);}
  
}