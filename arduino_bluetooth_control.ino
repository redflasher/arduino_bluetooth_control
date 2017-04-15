int POWER_PIN = 9;//must connected to polar transistor gate-pin
char incomingByte = 0;

int VOLUME = 0;//min=25, max=255
int VOLUME_BUF = 0;
int CUR_VOLUME = 0;

void setup()
{
  Serial.begin(9600);
  //pinMode(POWER_PIN, OUTPUT);
  Serial.write("Hello, android!");
}

void loop()
{
  while(Serial.available() > 0)
  {
    incomingByte = Serial.read();
    
    // ON/OFF
    if (int(incomingByte) == '1' )
    {
      VOLUME = 255;
    }    
    if ( int(incomingByte) == '0')
    {
      CUR_VOLUME = VOLUME;
      VOLUME = 0;
    }

    //VOL UP/DOWN
    if ( int(incomingByte) == '2')
    {
      VOLUME += 25;
      if(VOLUME > 255)VOLUME = 255;
    }
    if ( int(incomingByte) == '3')
    {
      VOLUME -= 25;
      if(VOLUME < 25) VOLUME = 0;
    }
  }

  if(VOLUME != VOLUME_BUF)
  {
    VOLUME_BUF = VOLUME;
  }
  analogWrite(POWER_PIN, VOLUME);
}



