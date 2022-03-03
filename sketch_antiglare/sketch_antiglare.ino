int sensorPin = A0; // select the input pin for LDR
int lcdPin = 2;
int headlightPin = 10;
int sensorValue = 0;

void setup() {
pinMode(lcdPin, OUTPUT);
digitalWrite(lcdPin, LOW);
pinMode(headlightPin, OUTPUT);
digitalWrite(headlightPin, LOW);
Serial.begin(9600);
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
//Serial.println(sensorValue); //prints the values coming from the sensor on the screen
if(sensorValue>=200){
digitalWrite(lcdPin, HIGH);
digitalWrite(headlightPin, HIGH);
delay(300);
digitalWrite(headlightPin, LOW);
delay(150);
digitalWrite(headlightPin, HIGH);
delay(300);
digitalWrite(headlightPin, LOW);
}else{
digitalWrite(lcdPin, LOW);
}
delay(1000);
}

