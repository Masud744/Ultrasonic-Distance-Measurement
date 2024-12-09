int trig = 9;
int echo = 10;
int led = 8;
void setup() {
 
  Serial.begin(9600);
  

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  
  
  long duration = pulseIn(echo, HIGH);
  
 
  float distance = duration * 0.034 / 2;
  
 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  

  if (distance < 10) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  
  delay(100);
}