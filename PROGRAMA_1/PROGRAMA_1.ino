void setup()
{
 for (int i=0;i<11;i++)//cada cicle ens activarà certes coses  
    {
   pinMode(i,OUTPUT);    
    }
    // degut a la quantitat de LEDs ho repartirem per 3 nivells
     //De forma analògica
    pinMode(A0,OUTPUT);    //pin A0 a nivell 1 
    pinMode(A1,OUTPUT);   // PIN A1 a nivell 2
    pinMode(A2,OUTPUT);   // PIN A2 a nivell 3 
    
    digitalWrite(A0,HIGH);   
    digitalWrite(A1,HIGH);  
    digitalWrite(A2,HIGH);   

}
void loop()
{
        digitalWrite(A0,LOW);    //Declarem A0 com a LOW, l'agafem per fer la sequencia de leds aqui
          for (int i=2;i<11;i++)
          {
              digitalWrite(i,HIGH); //aqui iniciem els leds
              delay(200);
                delay(200);
                  delay(200);
            digitalWrite(i,LOW);
          }
        digitalWrite(A0,HIGH);    // deixem el A0
          
          digitalWrite(A1,LOW);   // Agafem A1  i repetim
          for (int i=2;i<11;i++)
          {
              digitalWrite(i,HIGH);   // Repetim els leds però a A1
                            delay(200);
                            delay(200);
                            delay(200);
              digitalWrite(i,LOW);
          }
        digitalWrite(A1,HIGH);    // Ens emportem el A1
          
        digitalWrite(A2,LOW);    // Fiquem el A2
        for (int i=2;i<11;i++)
        {
    digitalWrite(i,HIGH);    // Activem els leds a A3
                          delay(200);
                          delay(200);
                          delay(200);
     digitalWrite(i,LOW);
        }
  
   digitalWrite(A2,HIGH);    // Pujem A3

}//Així, per ordre conseguir activar tots els leds conforme anem pujan pel cub 
}
