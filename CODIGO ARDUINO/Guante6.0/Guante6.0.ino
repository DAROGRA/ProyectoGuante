void setup() {
 Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
int valoresMin[5] = {200, 200, 200, 200, 200}; // Valores mínimos para cada entrada analógica
int valoresMax[5] = {400, 400, 400, 400, 400}; // Valores máximos para cada entrada analógica

while (true) {
  int valores[5]; // Arreglo para guardar los valores de las entradas analógicas

  // Medir los valores de las entradas analógicas y guardarlos en el arreglo
  for (int i = 0; i < 5; i++) {
    valores[i] = analogRead(i);
  }

  bool fueraDeRango = false; // Variable para saber si hay alguna entrada fuera de rango
  
  // Revisar cada entrada analógica y comprobar si está dentro del rango
  for (int i = 0; i < 5; i++) {
    if (valores[i] < valoresMin[i]) {
      Serial.print("Entrada ");
      Serial.print(i);
      Serial.println(" debajo del rango");
      fueraDeRango = true;
    }
    else if (valores[i] > valoresMax[i]) {
      Serial.print("Entrada ");
      Serial.print(i);
      Serial.println(" encima del rango");
      fueraDeRango = true;
    }
  }

  // Si todas las entradas están dentro del rango, imprimir "felicitaciones"
  if (!fueraDeRango) {
    Serial.println("Felicitaciones");
  }

  delay(1000); // Esperar un segundo antes de volver a medir
}


}
