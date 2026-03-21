to flash esp32 : 
- utilisation idf.py 
- rx arduino branché sur rx esp32
- tx ardunio branché sur tx esp32
- adaptation niveau logique en 3.3V

https://templates.blakadder.com/wireless_tag_WT32-ETH01.html
template : {"NAME":"WT32_ETH01","GPIO":[1,1,1,1,1,1,0,0,1,0,1,1,3840,576,5600,0,0,0,0,5568,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,1],"FLAG":0,"BASE":1}
activer l'ETH en tapant ca dans la console (web ou uart) : 
EthAddress 1

Helpful:
https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/establish-serial-connection.html
https://docs.espressif.com/projects/esptool/en/latest/esp32/advanced-topics/boot-mode-selection.html#automatic-bootloader
https://www.teachmemicro.com/arduino-usb-serial-converter/
https://circuitofthings.com/esp8266-01-pinout/
https://files.seeedstudio.com/products/102991455/WT32-ETH01_datasheet_V1.1-%20en.pdf
https://tasmota.github.io/docs/Getting-Started/#initial-configuration
https://tasmota.github.io/docs/AM2301/#wiring