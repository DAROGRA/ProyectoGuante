// Variables para almacenar los valores mínimos y máximos
float A0min, A0max, A1min, A1max, A2min, A2max, A3min, A3max, A4min, A4max;
float A0_avg = 0, A1_avg = 0, A2_avg = 0, A3_avg = 0, A4_avg = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {



  Serial.print("empieza moviendo tu meñique por 5 seg");
  Serial.println();
  delay(2000);
  // Tomar medidas de A0 durante 5 segundos
  for (int i = 0; i <0; i += 5) {
    float A0 = analogRead(A0);
    
    // Actualizar los valores mínimos y máximos
    if (A0 < A0min || i == 0) A0min = A0;
    if (A0 > A0max || i == 0) A0max = A0;
    
    delay(5);
  }


  Serial.print("empieza moviendo tu Anular por 5 seg");
  Serial.println();
  delay(2000);
  // Tomar medidas de A1 durante 5 segundos
  for (int i = 0; i < 5000; i += 5) {
    float A1 = analogRead(A1);
    
    // Actualizar los valores mínimos y máximos
    if (A1 < A1min || i == 0) A1min = A1;
    if (A1 > A1max || i == 0) A1max = A1;
    
    delay(5);
  }

  Serial.print("empieza moviendo tu Medio por 5 seg");
  Serial.println();
  delay(2000);
  
  for (int i = 0; i < 5000; i += 5) {
    float A2 = analogRead(A2);
    
    // Actualizar los valores mínimos y máximos
    if (A2 < A2min || i == 0) A2min = A2;
    if (A2 > A2max || i == 0) A2max = A2;
    
    delay(5);
  }

  Serial.print("empieza moviendo tu Indice por 5 seg");
  Serial.println();
  delay(2000);
  for (int i = 0; i < 5000; i += 5) {
    float A3 = analogRead(A3);
    
    // Actualizar los valores mínimos y máximos
    if (A3 < A3min || i == 0) A3min = A3;
    if (A3 > A3max || i == 0) A3max = A3;
    
    delay(5);
  }
  Serial.print("empieza moviendo tu Pulgar por 5 seg");
  Serial.println();
  delay(2000);

  for (int i = 0; i < 5000; i += 5) {
    float A4 = analogRead(A4);
    
    // Actualizar los valores mínimos y máximos
    if (A4 < A4min || i == 0) A4min = A4;
    if (A4 > A4max || i == 0) A4max = A4;
    //Serial.print(A4);
    
    delay(5);
  }


  

  int contador = 0; // Inicializar el contador


  Serial.print("Ahora la seña:");
  Serial.println();
  delay(2000);  
  while (contador < 10) { // Ejecutar el segundo bucle 10 veces

  // Tomar otras 10 medidas y realizar un filtrado promedio
  
  for (int i = 0; i < 10; i++) {
    A0_avg += analogRead(A0);
    A1_avg += analogRead(A1);
    A2_avg += analogRead(A2);
    A3_avg += analogRead(A3);
    A4_avg += analogRead(A4);
    delay(1);
  }
  A0_avg /= 10;
  A1_avg /= 10;
  A2_avg /= 10;
  A3_avg /= 10;
  A4_avg /= 10;
  
  // Imprimir los valores obtenidos
  Serial.print("A0: "); Serial.print(A0_avg); Serial.print("\t");
  Serial.print("A1: "); Serial.print(A1_avg); Serial.print("\t");
  Serial.print("A2: "); Serial.print(A2_avg); Serial.print("\t");
  Serial.print("A3: "); Serial.print(A3_avg); Serial.print("\t");
  Serial.print("A4: "); Serial.print(A4_avg); Serial.print("\t");
  Serial.println();
  contador++; // Incrementar el contador

  delay(2000);


  }


contador = 0;


  float map0=map(A0_avg, A0min, A0max, 0, 100);//Meñique 
    Serial.print(map0);
    Serial.print("\t");
  float map1=map(A1_avg, A1min, A1max, 0, 100);//Anular  
    Serial.print(map1);
    Serial.print("\t");
  float map2=map(A2_avg, A2min, A2max, 0, 100); //Medio
    Serial.print(map2);
    Serial.print("\t");
  float map3=map(A3_avg, A3min, A3max, 0, 100); // Indice
    Serial.print(map3);
    Serial.print("\t");
  float map4=map(A4_avg, A4min, A4max, 0, 100); //pulgar
    Serial.print(map4);
    Serial.print("\t");


    Serial.println();







  if(  map0 >= 33*0.95 && map0 <= 38*1.05 && //A//
          map1 >= 20*0.95 && map1 <= 24*1.05 &&
          map2 >= 31*0.95 && map2 <= 37*1.05 &&
          map3 >= 25*0.95 && map3 <= 28*1.05 &&
          map4 >=74*0.95  && map4 <= 100*1.05){
          Serial.println("Hola Mundo Aa");
          //Letra_Tomada = 'A';
          }  // HACER LO QUE SEA WIII

    else{ 
      Serial.println("Nada");
    
    
    }
  
  A0_avg = 0;
  A1_avg = 0;
  A2_avg = 0;
  A3_avg = 0;
  A4_avg = 0;
  A0max;
  A0min;
  A1max;
  A1min;
  A2max;
  A2min;
  A3max;
  A3min;
  A4max;
  A4min;
}
