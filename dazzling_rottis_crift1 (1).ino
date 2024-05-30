int rain=5;
int buzer=6;
int rainState=0;

void setup() {
  
  pinMode(buzer,OUTPUT);
  
  pinMode(rain,INPUT);
}

void loop() {
  
  rainState=digitalRead(rain);
  
  if (rainState=HIGH) {
    
    digitalWrite(buzer,HIGH);
  } else {
    
    digitalWrite(buzer,LOW);
  }
}