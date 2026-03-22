# esp32 eth humidity
Custom humidity sensor IoT device using esp32 with ethernet socket using Tasmota firmware.

## Etapes a la main :

from zero to  working : 
- configured arduino uno to be a usb-to-serial bridge (reset to gnd to only have the usb controler enable and not the main MCU)
- rx arduino branché sur rx esp32 adaptation niveau logique en 3.3V (pont diviseur 1k et 2.2k)
- tx ardunio branché sur tx esp32
- pull up sur le enable de l'esp32 (10k)
- bouton sur le GPIO0 pour relié a la masse le pin pour rentrer en mode flash

to flash esp32 : 
- utilisation esptool (nix-shell -p esptool) 
- erase flash : esptool --port /dev/ACM0 erase_flash
- telecharger dernier firmware tasmota pour esp32 (https://ota.tasmota.com/tasmota32/release/tasmota32.factory.bin)
- write firmware : esptool --port /dev/ACM0 write_flash 0x0 tasmota32.factory.bin

## Setup de tasmota :
ref : https://templates.blakadder.com/wireless_tag_WT32-ETH01.html  
template : {"NAME":"WT32_ETH01","GPIO":[1,1,1,1,1,1,0,0,1,0,1,1,3840,576,5600,0,0,0,0,5568,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,1],"FLAG":0,"BASE":1}  
activer l'ETH en tapant ca dans la console (web ou uart) : 
```
EthAddress 1
```

Helpful:
https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/establish-serial-connection.html  
https://docs.espressif.com/projects/esptool/en/latest/esp32/advanced-topics/boot-mode-selection.html#automatic-bootloader  
https://www.teachmemicro.com/arduino-usb-serial-converter/  
https://circuitofthings.com/esp8266-01-pinout/  
https://files.seeedstudio.com/products/102991455/WT32-ETH01_datasheet_V1.1-%20en.pdf  
https://tasmota.github.io/docs/Getting-Started/#initial-configuration  
https://tasmota.github.io/docs/AM2301/#wiring  

## Automated script
I will now setup the second one using only commandes and will make a script that does everything in one go
