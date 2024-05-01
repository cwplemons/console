from datetime import datetime
import pytz

time_in = (7, 18)
time_out = ((time_in[0]+8)-12, time_in[1])

def process(h, m):
    time_in = (h, m)
    current = (
        datetime.now(pytz.timezone('America/Los_Angeles')).hour,
        datetime.now(pytz.timezone('America/Los_Angeles')).minute
    )
    hour = current[0] - time_in[0]
    minute = round((current[1] - time_in[1])/60, 2)
    return hour+minute

print(process(7, 18))
