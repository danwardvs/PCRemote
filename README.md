# PCRemote


![Preview](https://raw.githubusercontent.com/danwardvs/PCRemote/master/setup.jpg)

An IR reader paired with an Arduino and a python server to turn an old TV remote into a media controller for PC

The hardware consists of an Arduino Uno (although any Arduino will do), and an inexpensive IR reciever TSOP38238.

The Arduino uses IRLib2 (https://github.com/cyborg5/IRLib2) to decode the incoming IR signals.
The python server is written in python 3 using pyserial (https://github.com/pyserial/pyserial) to communicate with the Arduino, and uses pyautogui (https://github.com/asweigart/pyautogui) to mimic key presses in Windows. 

![Preview](https://raw.githubusercontent.com/danwardvs/PCRemote/master/pinout.jpg)

# Dependencies
As stated above, you will require
- IRLib2
- pyserial
- pyautogui
