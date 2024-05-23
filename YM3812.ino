#include <SPI.h>

#define IRQ 19
#define IC 18
#define ADDR 17
#define WR 16
#define RD 15
#define CS 14
#define DATA0 1
#define DATA1 2
#define DATA2 3
#define DATA3 4
#define DATA4 5
#define DATA5 6
#define DATA6 7
#define DATA7 8

#define TEST_REG 0x01
#define TIMER1_REG 0x02
#define TIMER2_REG 0x03


void setup() {
  pinMode(IRQ, OUTPUT);
  pinMode(IC, OUTPUT);
  pinMode(ADDR, OUTPUT);
  pinMode(WR, OUTPUT);
  pinMode(RD, OUTPUT);
  pinMode(CS, OUTPUT);
  pinMode(DATA0, OUTPUT);
  pinMode(DATA1, OUTPUT);
  pinMode(DATA2, OUTPUT);
  pinMode(DATA3, OUTPUT);
  pinMode(DATA4, OUTPUT);
  pinMode(DATA5, OUTPUT);
  pinMode(DATA6, OUTPUT);
  pinMode(DATA7, OUTPUT);
  SPI.begin();
}
