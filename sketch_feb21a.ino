const int trigPin = 3;
const int echoPin = 2;

int duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  for (int i = 4; i < 9; i++){
    pinMode (i, OUTPUT);
  }
}

void loop() {
digitalWrite (trigPin, LOW);
delayMicroseconds(2);

digitalWrite (trigPin, HIGH);
delayMicroseconds (10);

digitalWrite (trigPin, LOW);
duration = pulseIn (echoPin, HIGH);
distance = 0.034 * duration/2;



if(distance < 5){
  for (int i = 4; i < 9; i++){
    digitalWrite(i, HIGH);
  }
}

else if(distance > 5 && distance < 10){
  digitalWrite (8,LOW);
  for (int i = 4; i < 8; i++){
    digitalWrite(i, HIGH);
  }
}
if(distance > 10 && distance < 15){
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  for (int i = 4; i < 7; i++){
    digitalWrite(i, HIGH);
  }

}
if(distance > 15 && distance < 20){
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  for (int i = 4; i < 6; i++){
    digitalWrite(i, HIGH);
  }
}
if(distance > 20 && distance < 25){
  digitalWrite (4,HIGH);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  }
}
