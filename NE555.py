# Resistor values are in kiloohms, capacitor value is in microfarads
def get_555(r1, r2, c1):
    class results:
        high = f'{round((0.693*(r1+r2)*c1)/1000, 3)} seconds'
        low = f'{round((0.693*r2*c1/1000), 3)} seconds'
        freq = f'{round(1.44/(r1+(2*r2)*c1), 2)} MHz'
    return results
r = get_555(0.001, 0.100, 70)
print(r.high, r.low, r.freq)
