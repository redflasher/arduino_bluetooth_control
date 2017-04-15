# arduino_bluetooth_control
Adruino get commands from Android by Bluetooth and do something.

For example, you can controll your joy car, if you set some char-commands into loop-cycle:

```
if (int(incomingByte) == 'w' )
    {
      //code for move forward
    }

if (int(incomingByte) == 's' )
    {
      //code for move back
    }
```
    etc.


----

For send commands use someone android-code, [like this](https://github.com/palaima/AndroidSmoothBluetooth).
