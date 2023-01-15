##jozaffat ulises

import serial as lib_serial

def invertir(nom):
    
    a = 0
    n= ''
    for index in range(len(nom) - 1, -1, -1):
        n += nom[index]
        n += str(a)
        a+= 1
    return n


port = lib_serial.Serial('COM5',28800)


    
mensaje = input("escriba el nombre : ")
port.write(bytes(mensaje, 'UTF-8'))
reading = port.readline()
print(reading.decode()) #Default value UTF-8
port.write(bytes(mensaje, 'UTF-8'))
0xff == ord('q')







