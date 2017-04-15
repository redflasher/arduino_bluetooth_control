This code for receive commands across Bluetooth-module like as HC-05 or HC-06. Bluetooth module must is connected to rx/tx data pins and power pins(+5v and Gnd).

Adruino get commands from Android device by Bluetooth and do something.

For example, you can control your joy car, if you set some char-commands into your loop-cycle:

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
----

For send commands use someone android-code, [like this](https://github.com/palaima/AndroidSmoothBluetooth).
