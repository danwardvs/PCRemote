import serial
import pyautogui
ser = serial.Serial("COM5", 9600)   # open serial port that Arduino is using

button_mappings = {
    '1637888207':'volumeup',
    '1637920847':'volumedown',
    '1637882087':'enter',
    '1637931047':'esc',
    '1637879537':'playpause',
    '1637940737':'nexttrack',
    '1637876222':'prevtrack',
    '1637904527':'volumemute',
    '1637902487':'left',
    '1637918807':'right',
    '1637892797':'up',
    '1637925437':'down',

}


result = ""

while True:

    #read raw data from serial
    raw_key_data = ser.readline()

    #trim down trailing characters we don't need
    raw_key_data=raw_key_data[0:-2]

    #decode binary data to a usable string
    result = raw_key_data.decode("utf-8")

    #if we have a definition in the dictionary for the button, press it on the host
    if result in button_mappings:
        pyautogui.press(button_mappings[result])
        print(button_mappings[result])

    #if not, print the code so we can give it a definition in the dictionary
    else:
        print(result)
        
    

