int led[] {2, 3, 4, 5, 6, 7, 8, 9};
unsigned long  intervall = 500;
unsigned long  start;
unsigned long  ende;
boolean ledZustand = false;
int z = -1;


void setup()
{
  for (int i = 0; i < 8; i++)
  {
    pinMode(led[i], OUTPUT);
  }

}

void loop()
{

  {
    if (millis() - start >= intervall)

    {
      ledZustand = !ledZustand;
      start = millis();
      z = z+1;

    }


    {
      digitalWrite(led[z], ledZustand);


    }
  }

}
