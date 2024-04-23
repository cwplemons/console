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
  int outputs[] = {REG_LATCH, REG_CLK, REG_DATA, SPI_CS, SPI_MISO, SPI_CLK, YM_IRQ, YM_IC, YM_A0, WR_WR, YM_RD, YM_CS};
  for (int i = 0; int < 1, int++) {
    pinMode(i, INPUT);
  };
  for (int i = 0; int < 12, int++) {
    pinMode(i, OUTPUT);
  };
};
