
/*
 * Created by: Vincent Wilcox
 * Created on: Feb 2022
 * Blink Program
 */



int blinkTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(blinkTime); // wait
  digitalWrite(LED_BUILTIN,LOW); // turn the LED off by making the voltage low
  delay(blinkTime); // wait

  blinkTime = blinkTime + 1000;
}

