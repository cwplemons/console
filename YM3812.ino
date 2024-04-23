//Yamaha YM3812 Library 
//Developed by Cameron Plemons
//Email: cw.plemons@gmail.com

#define REG_LATCH 2
#define REG_CLK 3
#define REG_DATA 4

#define SPI_CS 10
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_CLK 13

#define YM_IRQ 14
#define YM_IC 15
#define YM_A0 16
#define YM_WR 17
#define YM_RD 20
#define YM_CS 21

void setup() {
  int inputs[] = {SPI_MOSI};
  int outputs[] = {REG_LATCH, REG_CLK, REG_DATA, SPI_CS, SPI_MISO, SPI_CLK};
  for (int i = 0; int < 6, int++) {
    pinMode(i, OUTPUT);
  };
};
