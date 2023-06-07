float A0min=0, A0max=0, A1min=0, A1max=0, A2min=0, A2max=0, A3min=0, A3max=0, A4min=0, A4max=0;
float A0_avg = 0, A1_avg = 0, A2_avg = 0, A3_avg = 0, A4_avg = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{




  float map0=map(analogRead(A0), 174, 271, 0, 100);//Meñique 
    Serial.print(map0);
    Serial.print("\t");
  float map1=map(analogRead(A1), 125, 258, 0, 100);//Anular  
    Serial.print(map1);
    Serial.print("\t");
  float map2=map(analogRead(A2), 144, 263, 0, 100); //Medio
    Serial.print(map2);
    Serial.print("\t");
  float map3=map(analogRead(A3), 124, 244, 0, 100); // Indice
    Serial.print(map3);
    Serial.print("\t");
  float map4=map(analogRead(A4), 221, 295, 0, 100); //pulgar
    Serial.print(map4);
    Serial.print("\t");
    Serial.println();
    delay(1000);

    if(  map0 >= 7*0.95 && map0 <= 25*1.05 && //A//
          map1 >= 5*0.95 && map1 <= 15*1.05 &&
          map2 >= 10*0.95 && map2 <= 25*1.05 &&
          map3 >= 0*0.95 && map3 <= 14*1.05 &&
          map4 >=40*0.95  && map4 <= 80*1.05){
          Serial.println("Hiciste una Aa");
          //Letra_Tomada = 'A';
          }  // HACER LO QUE SEA WIII


     else if(map0 >= 95*0.95 && map0 <= 100*1.05 && //A//
          map1 >= 100*0.95 && map1 <= 105*1.05 &&
          map2 >= 97*0.95 && map2 <= 102*1.05 &&
          map3 >= 94*0.95 && map3 <= 101*1.05 &&
          map4 >=14*0.95  && map4 <= 30*1.05)
          {
          Serial.println("Hiciste una Bb");
          }  

          //Copiar de aqui
     else if(map0 >= 68*0.95 && map0 <= 100*1.05 && //A//
          map1 >= 40*0.95 && map1 <= 70*1.05 &&
          map2 >= 60*0.95 && map2 <= 90*1.05 &&
          map3 >= 50*0.95 && map3 <= 80*1.05 &&
          map4 >=60*0.95  && map4 <= 90*1.05)
          {
          Serial.println("Hiciste una Cc");
          }  
          //hasta aqui para agregar mas letras
   else{ 
      Serial.println("Revisa tu mano, no se detecto ninguna letra");
      }




}