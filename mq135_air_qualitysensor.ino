int gazsensorpin=0;
int buzzerpin=2;
void setup() {

  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {

  int deger=analogRead(0);
  Serial.print("Okunan sensör değeri=");
  Serial.println(deger); // analogdan aldığımız için 0-1023 arası bir değer görürüz.
  //eşik değerini 150 tanımla örneğin
  
  if(deger>=180){

  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(2,LOW);
  delay(100);
    
  }
}
