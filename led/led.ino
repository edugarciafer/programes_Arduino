void setup() {
pinMode( 2, OUTPUT) ;  // inicia el pin2 com a sortida

}

void loop() {
 digitalWrite(2, HIGH); // engega el pin2
 delay(500); //espera 0.5 segons
 digitalWrite(2, LOW); //atura el pin2
 delay(500); //espera 0.5 segons

}
