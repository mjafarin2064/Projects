int sensorPin = A0;
int LED = 11;

void setup(){
  Serial.begin(9600); 
}

void loop(){
  int val = analogRead(A0);
  Serial.println(val);
  // Using PWM for writing the value to the LED
  analogWrite(LED, val/4);
  // Wait a little for the data to print
  delay(1000);
}
