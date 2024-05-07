BYTES = lambda: bytearray(64)

def I2C_WRITE(length):
    send = BYTES()
    send[0] = 0x90
    if length >= 256:
        send[1] = length%256
        send[2] = length//256
    else:
        send[1] = length
    send[3] = 0x33
    return send

print(I2C_WRITE(65535))
