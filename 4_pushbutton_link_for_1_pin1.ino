byte leds[4]={2,3,4,5};
void setup()
{
  for(int i=0;i<=4;i++)
  pinMode(leds[i], OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A1);
  Serial.println(value);
  if ( value > 800 && value >= 1000) {
    digitalWrite(leds[4],0);
  } else if ( value > 480 && value < 650) {
    digitalWrite(leds[1],1);
  } else if ( value > 650 && value < 750) {
    digitalWrite(leds[2],1);
  } else if ( value > 750 && value < 800) {
    digitalWrite(leds[3],1);
  }else if ( value >= 0) {
    digitalWrite(leds[0],1);
  }
}