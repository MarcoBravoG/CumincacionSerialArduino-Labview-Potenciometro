int valorA0;

void setup() 
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() 
{
  valorA0=analogRead(A0);
  Serial.println(valorA0);
  delay(50);
}

