int piezo = 7;
int sws [] = {2, 3, 4, 5};
int freq[] = {440, 494, 262, 294, 330, 349, 392};

void setup() 
{
  pinMode(piezo, OUTPUT);
  for(int i =0; i<4; i++)
  {
    pinMode(sws[i], INPUT);
  }
}

void loop() 
{
  for(int i = 0; i<4; i++)
  {
    int val = digitalRead(sws[i]);
    if(val)
    {
      tone(piezo, freq[i]);
      while(digitalRead(sws[i]));
      noTone(piezo);
    }
  }
}
