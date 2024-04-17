static unsigned int I2C_READ_PACKET[6] = {
    0x91, 0x00, 0x02, 0x2C, 0x01, 0x02
  };

void READ_DATA(data) {
  while(Wire.available()) {
    for (let i = 0; i < 7; i++) {
      Wire.write(I2C_READ_PACKET[6]);
    };
    Serial.println(Wire.requestFrom(0x2C, 2);)
  };
};

void setup() {
  Serial.begin(9600);
  Wire.begin(0x2C);
};

void loop() {
  READ_DATA();
};
