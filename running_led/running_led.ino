//running 13 LED by sapuijuk29

int led = 13;
int n = 1;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(led, HIGH);
  delay(20);
  digitalWrite(led, LOW);
  led = led + n ;
  if(led==2){
    n= + 1 ;
    }
  if(led==14){
    n= -1;
  }
}
