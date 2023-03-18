int sensorPin = A0;                // The pin to which we will connect the sensor
int thresholdValue = 100;          // Threshold value for the amount of water
int buzzerPin = 8;                 // Pin to connect the buzzer
int data;                          // The value we read from the sensor

void setup() {
  pinMode(buzzerPin, OUTPUT);      // We set the pin that we connected the buzzer to as OUTPUT.
}

void loop() {
  data = analogRead(sensorPin);    // We are reading analog data from the sensor.

  if(data > thresholdValue){           // If the sensor data exceeds the threshold, the codes in the if are applied.
    digitalWrite(buzzerPin, HIGH); 
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                            // If the sensor data is less than the threshold value, the codes in else are applied.
    digitalWrite(buzzerPin, LOW);
  }
}