BYTES = lambda: bytearray(64)

def I2C_WRITE(*data):
    send = BYTES()
    send[0] = 0x90
    if len(data) >= 256:
        send[1] = len(data)%256
        send[2] = len(data)//256
    else:
        send[1] = len(data)
        send[2] = 0x00
    send[3] = 0x02
    for i in range(len(data)):
        send[i+4] = data[i]
    return send
    
print(I2C_WRITE(0x01, 0x03, 0x05, 0x07))
