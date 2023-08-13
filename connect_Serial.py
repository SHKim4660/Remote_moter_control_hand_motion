import serial

serial_data = serial.Serial('com9',9600)

def getValue():
    serial_data.write(b'1')
    esp32_data = serial_data.readline()
    return esp32_data

while True:
    inputUser = input("User :")
    print(getValue())