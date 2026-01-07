int latchpin = 11;
int clockpin = 9;
int datapin = 12;
int delay_time = 1000;

void setup(){
  // put your setup code here, to run once:
pinMode(latchpin, OUTPUT);
pinMode(datapin, OUTPUT);
pinMode(clockpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(delay_time);

byte zero_led = 0b11111100;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, zero_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

byte one_led = 0b01100000;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, one_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

byte two_led = 0b11011010;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, two_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

byte three_led = 0b11110010;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, three_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

  byte four_led = 0b01100110;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, four_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

  byte five_led = 0b10110110;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, five_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

  byte six_led = 0b10111110;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, six_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

  byte seven_led = 0b11100000;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, seven_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

  byte eight_led = 0b11111110;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, eight_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

  byte nine_led = 0b11100110;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, nine_led);
  digitalWrite(latchpin, HIGH);
  delay(delay_time);

}
