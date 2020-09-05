/* ************************************************************************************ 
 *   PACKDUINO - EXEMPLOS 
 *  PROTODUINO - Sequencial com todas as portas digitais (D0 a D13)
 *  Desenvolvido em setembro de 2020
 *  por Josemar Junior
 *  packduino@gmail.com
 *  github.com/Packduino/ProtoDuino
 *************************************************************************************/
int ledPin [14];
void setup() {
  // set the digital pin as output:
  ledPin[0] = 0;
  ledPin[1] = 1;
  ledPin[2] = 2;
  ledPin[3] = 3;
  ledPin[4] = 4;
  ledPin[5] = 5;
  ledPin[6] = 6;
  ledPin[7] = 7;
  ledPin[8] = 8;
  ledPin[9] = 9;
  ledPin[10] = 10;
  ledPin[11] = 11;
  ledPin[12] = 12;
  ledPin[13] = 13;

  for (byte i = 0; i < 14; i++) {
    // Botão
    pinMode(ledPin[i], OUTPUT);
    digitalWrite(ledPin[i], LOW);
  }

}

void loop() {
  for (byte i = 0; i < 14; i++) {
    // Botão
    digitalWrite(ledPin[i], LOW);
  }
  delay(200);
  for (byte i = 0; i < 14; i++) {
    // Botão
    digitalWrite(ledPin[i], HIGH);
  }
  delay(200);
}
