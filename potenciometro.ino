int led = 9;
int led1 = 10;
int led2 = 11;
int potenciometro = 0;
int brillo;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
brillo = analogRead(potenciometro)/4;
encender(led, brillo);
encender(led1, brillo);
encender(led2, brillo);
Serial.println(brillo);
}

void encender(int led, int brillo){
  analogWrite(led, brillo);
  }
