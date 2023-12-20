# IoT
![image](https://github.com/Bringing-IoT-closer-to-everyone/Arduino/blob/c2344bafd8df5766f8d927c5dd5b5937052b1d66/image/IMG_0268.jpg)

## Overview
ローカルでインターネットに接続されているスマートフォンから家電が操作できます。

## Requirement
- Wiondows 10
- Arduino IDE 1.8.19
- Raspberry Pi 4 Model B (Kernel version: 5.15)
- iPhone8 (iOS 16.6)

## Material
- 赤外線LED [OSI5FU5111C-40]
- 炭素皮膜抵抗器 (47Ω x1)
- 赤外線受光モジュール [PL-IRM0101-3]

## Usage
1. Arduinoに赤外線LEDを接続する。
2. Raspberry PiとArduinoを接続する。
3. Raspberry PiでWebIOPiを起動し、Raspberry PiのIPアドレスであるX.X.X.X:8000にアクセスする。
![image](https://github.com/Bringing-IoT-closer-to-everyone/Arduino/blob/69bd78c0cf5a5ef16920759cfb80e0a976b4bf83/readme_source/htmlview.png)

家電を操作することができる。

## Description
### Arduino

### Raspberry Pi

## Reference
WebIPOi: https://webiopi.trouch.com/

## Author
[school](https://www.okako.okayama-c.ed.jp/)
