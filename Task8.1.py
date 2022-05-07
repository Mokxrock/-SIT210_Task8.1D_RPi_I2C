
from smbus import SMBus

addr= 0x8 #buss Address
bus = SMBus(1)

numb = 1 


print("Enter 1 for LED ON or 0 for LED OFF")

while 1:
    ledstate = input(">>>>>>  ")
    if ledstate == "1":
        bus.write_byte(addr, 0x1) # LED ON
    elif ledstate == "0":
        bus.write_byte(addr, 0x0) # LED OFF
    else:
        break
