const int trigPin = 9;   
const int echoPin = 8;  
const int busser = 5;  

void setup() {
  Serial.begin(115200);    
  pinMode(trigPin, OUTPUT);
  pinMode(busser, OUTPUT); 
  pinMode(echoPin, INPUT);  
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000); 

  long distance = duration * 0.034 / 2;

  if (distance < 10){
    tone(busser, 392, 500);
    delay(100);
    tone(busser, 392, 500);
  }
  delay(600);   


  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  

  delay(500); 
}
