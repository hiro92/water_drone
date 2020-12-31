# coding: utf-8

import webiopi
import os
import serial
import time


ser = serial.Serial('/dev/ttyACM0', 9600)
time.sleep(2)

pump = 4
diaphragm = 5
left_moter = 6
right_moter = 21


@webiopi.macro
def forward():
    ser.write(str.encode('f'))
    ser.close(str.encode)

@webiopi.macro
def left():
    ser.write(str.encode('l'))
    ser.close(str.encode)

@webiopi.macro
def propeller_stop():
    ser.write(str.encode('p'))
    ser.close(str.encode)

@webiopi.macro
def right():
    ser.write(str.encode('r'))
    ser.close(str.encode)

@webiopi.macro
def back():
    ser.write(str.encode('b'))
    ser.close(str.encode)

@webiopi.macro
def up():
    ser.write(str.encode('u'))
    ser.close(str.encode)

@webiopi.macro
def ud_stop():
    ser.write(str.encode('s'))
    ser.close(str.encode)

@webiopi.macro
def down():
    ser.write(str.encode('d'))
    ser.close(str.encode)
