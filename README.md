# PCRemote
An arduino IR reader paired with a python server to control a Windows PC with any IR remote

The hardware consists of an Arduino Uno (although any Arduino will do), and an inexpensive IR reciever TSOP38238.

The Arduino uses IRLib2 (https://github.com/cyborg5/IRLib2) to decode the incoming IR signals.
The python server is written in python 3 using pyserial (https://github.com/pyserial/pyserial) to communicate with the Arduino, and uses pyautogui (https://github.com/asweigart/pyautogui) to mimic key presses in Windows. 

# Dependencies
As stated above, you will require
- IRLib2
- pyserial
- pyautogui
