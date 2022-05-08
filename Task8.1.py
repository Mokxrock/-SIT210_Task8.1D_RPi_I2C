
from smbus import SMBus # Library use for I2C

addr= 0x8 #bus Address of the Slave
bus = SMBus(1) # By using thos object it indicate that it is using the I2C-1 connection of the raspberry pi


print("Enter 1 for LED ON or 0 for LED OFF")

while 1: # True
    ledstate = input(">>>>>>  ") # Takes in User Input 
    if ledstate == "1":
        bus.write_byte(addr, 0x1) # LED ON by telling the i2c bus
    elif ledstate == "0":
        bus.write_byte(addr, 0x0) # LED OFF by telling the i2c bus
    else:
        break # if other value it will pause the loop 
