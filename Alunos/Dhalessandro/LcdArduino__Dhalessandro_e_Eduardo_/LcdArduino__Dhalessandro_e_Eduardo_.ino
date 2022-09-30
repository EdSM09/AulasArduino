
/*******************************************************************************
  Kit Avançado para Arduino v4 - Liquid Crystal Display LCD
  Primeiros passos com um display LCD 16x2.
*******************************************************************************/
#include <LiquidCrystal.h> // inclui a biblioteca para uso do Display LCD
// inicializa um objeto nos pinos para acesso as funções do LCD
const int RS = 12, EN = 11, D4 = 10, D5 = 9, D6 = 8, D7 = 7;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);
void setup() {
  // Configura o LCD com os número de colunas e linhas
  lcd.begin(16, 2); // 16 colunas e 2 linhas
  // Limpa o LCD
  lcd.clear();
  // posiciona o cursor do LCD
  
}
void contarTempo(){
  unsigned long tempo_decorrido = millis() / 1000;
  lcd.setCursor(0, 1); // (coluna 0, linha 1);
  lcd.print(tempo_decorrido);
  lcd.print("s");
}
void loop() {
  
  contarTempo();
  lcd.setCursor(0, 0); // (coluna 0, linha 0)
  lcd.print("Hexa vem 2022"); // Imprime mensagem
  delay(1000);
  lcd.clear();
  

  contarTempo();
  lcd.setCursor(0,0);
  lcd.print("Vai menino Ney");
  delay(1000);
  lcd.clear();
  contarTempo();
  
 


  
}
