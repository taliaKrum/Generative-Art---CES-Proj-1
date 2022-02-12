
#define BEAT 400
#define HALF 200

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h


void setup(void) {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);

}

void bgColor() {
  tft.fillScreen(TFT_RED);
  delay(BEAT);
  tft.fillScreen(TFT_BLUE);
  delay(BEAT);
  tft.fillScreen(TFT_GREEN);
  delay(BEAT);
  tft.fillScreen(TFT_PURPLE);
  delay(BEAT);
}

void lightning() {
  tft.setTextSize(1);
  tft.fillScreen(TFT_BLACK);  
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.drawString("Thunderbolts and Lightning", 20, 50, 2);
  delay(HALF);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_YELLOW, TFT_WHITE);
  tft.drawString("Thunderbolts and Lightning", 20, 50, 2);
  delay(HALF);
  tft.fillScreen(TFT_BLACK);  
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.drawString("Thunderbolts and Lightning", 20, 50, 2);
  delay(HALF);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_YELLOW, TFT_WHITE);
  tft.drawString("Thunderbolts and Lightning", 20, 50, 2);
  delay(HALF);
  tft.fillScreen(TFT_BLACK);  
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.drawString("Thunderbolts and Lightning", 20, 50, 2);
  delay(HALF);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_YELLOW, TFT_WHITE);
  tft.drawString("Thunderbolts and Lightning", 20, 50, 2);
  delay(HALF);
  tft.fillScreen(TFT_BLACK);  
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.drawString("Thunderbolts and Lightning", 20, 50, 2);
  delay(HALF);
}

void galileo() {
  tft.fillScreen(TFT_MAGENTA);
  tft.setTextColor(TFT_WHITE);
  tft.drawString("galileo", 90, 0, 4);
  delay(BEAT);
  delay(BEAT);
  tft.setTextSize(2);
  tft.fillScreen(TFT_RED);
  tft.setTextColor(TFT_BLACK);
  tft.drawString("GALILEO", 0, 80, 4);
  delay(BEAT);
  delay(BEAT);
  tft.setTextSize(1);
  tft.fillScreen(TFT_MAGENTA);
  tft.setTextColor(TFT_WHITE);
  tft.drawString("galileo", 90, 0, 4);
  delay(BEAT);
  delay(BEAT);
  tft.setTextSize(2);
  tft.fillScreen(TFT_RED);
  tft.setTextColor(TFT_BLACK);
  tft.drawString("GALILEO", 0, 80, 4);
  delay(BEAT);
  delay(BEAT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tft.setTextSize(1);

  //2 4-counts before lyrics start
  bgColor(); 
  bgColor();

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.drawString("I", 60, 0, 4);
  delay(BEAT);
  tft.drawString("SEE", 80, 0, 4);
  delay(HALF);
  tft.drawString("A",150, 0, 4);
  delay(HALF);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("little", 90, 64, 2);
  delay(BEAT);

  tft.setTextSize(2);
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.fillScreen(TFT_WHITE);
  tft.drawString("SIL", 70, 0, 4);
  delay(HALF);
  tft.drawString("OU", 80, 40, 4);
  delay(HALF);
  tft.drawString("ETTO", 90, 80, 4);
  delay(BEAT);

  tft.setTextSize(1);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.fillScreen(TFT_BLACK);
  tft.drawString("OF", 72, 0, 4);
  delay(HALF);
  tft.drawString("A", 72, 30, 4);
  delay(HALF);
  tft.drawString("MAN", 72, 60, 4);
  delay(BEAT);

  tft.fillScreen(TFT_GREEN);  
  tft.setTextColor(TFT_MAGENTA, TFT_GREEN);
  tft.drawString("SCARAMOUCH", 25, 50, 4);
  delay(BEAT);
  tft.fillScreen(TFT_MAGENTA);
  tft.setTextColor(TFT_GREEN, TFT_MAGENTA);
  tft.drawString("SCARAMOUCH", 25, 50, 4);
  delay(BEAT);
   tft.fillScreen(TFT_GREEN);  
  tft.setTextColor(TFT_MAGENTA, TFT_GREEN);
  tft.drawString("SCARAMOUCH", 25, 50, 4);
  delay(BEAT);
  tft.fillScreen(TFT_MAGENTA);
  tft.setTextColor(TFT_GREEN, TFT_MAGENTA);
  tft.drawString("SCARAMOUCH", 25, 50, 4);
  delay(BEAT);

  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_RED);
  tft.drawString("Will", 80, 50, 4);
  delay(HALF);
  tft.fillScreen(TFT_WHITE);
  tft.drawString("you", 80, 50, 4);
  delay(HALF);
  tft.fillScreen(TFT_WHITE);
  tft.drawString("do", 80, 50, 4);
  delay(HALF);
  tft.fillScreen(TFT_WHITE);
  tft.drawString("the", 80, 50, 4);
  delay(HALF);
  tft.setTextSize(2);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_YELLOW, TFT_BLUE);
  tft.drawString("FAN", 60, 50, 4);
  delay(BEAT);
  tft.fillScreen(TFT_WHITE);
  tft.drawString("DAN", 60, 50, 4);
  delay(BEAT);
  tft.fillScreen(TFT_WHITE);
  tft.drawString("GO", 60, 50, 4);
  delay(BEAT);

  lightning();

  tft.fillScreen(TFT_BLUE);
  tft.setTextColor(TFT_RED);
  tft.drawString("VERY", 60, 50, 4);
  delay(BEAT);
  tft.fillScreen(TFT_BLUE);
  tft.setTextSize(2);
  tft.drawString("VERY", 60, 50, 4);
  delay(BEAT);
  tft.setTextSize(1);
  tft.fillScreen(TFT_BLUE);
  tft.drawString("FRIGHT", 10, 50, 4);
  delay(BEAT);
  tft.drawString("ENING", 100, 50, 4);
  delay(BEAT);
  tft.fillScreen(TFT_BLUE);
  tft.drawString("ME!", 60, 50, 4);
  delay(BEAT);

  galileo();

  tft.setTextSize(1);
  tft.fillScreen(TFT_MAGENTA);
  tft.setTextColor(TFT_WHITE);
  tft.drawString("GALILEO", 0, 50, 4);
  delay(BEAT);
  delay(BEAT);
  tft.drawString("FIGARO", 110, 50, 4);
  delay(BEAT);
  delay(HALF);

  tft.fillScreen(TFT_PURPLE);
  tft.setTextColor(TFT_BLACK);
  tft.drawString("magnific-", 0, 50, 4);
  delay(BEAT);
  tft.fillScreen(TFT_PURPLE);
  tft.setTextSize(2);
  tft.drawString("O", 30, 50, 4);
  delay(BEAT);
  tft.drawString("O", 60, 50, 4);
  delay(BEAT);
  tft.drawString("O", 90, 50, 4);
  delay(BEAT);
  tft.drawString("O", 120, 50, 4);
  delay(BEAT);
  
}
