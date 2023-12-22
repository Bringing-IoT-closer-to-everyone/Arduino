# IoT
<!-- START doctoc -->
- [概要](#概要)
- [開発環境](#開発環境)
- [材料](#材料)
- [使い方](#使い方)
- [セッティング](#セッティング)
  - [Arduino](#Arduino)
  - [Raspberry_Pi](#Raspberry_Pi)
- [参考文献](#参考文献)
- [著者について](#著者について)

<!-- END doctoc -->
<p align="center">
  <img src="https://github.com/Bringing-IoT-closer-to-everyone/Arduino/blob/c2344bafd8df5766f8d927c5dd5b5937052b1d66/image/IMG_0268.jpg", width="50%">
</p>

## 概要
Raspberry Piと同じローカルのインターネットに接続されているスマートフォンで家電が操作できます。

## 開発環境
- Wiondows 10
- Arduino IDE 1.8.19
- Raspberry Pi 4 Model B (Kernel version: 5.15)
- iPhone8 (iOS 16.6)

## 材料
- Arduino Uno R3互換機
- 赤外線LED [OSI5FU5111C-40]
- 炭素皮膜抵抗器 (47Ω x1)
- 赤外線受光モジュール [PL-IRM0101-3]

## 使い方
1. Arduinoに赤外線LEDを接続する。
2. Raspberry PiとArduinoを接続する。
3. Raspberry PiでWebIOPiを起動し、Raspberry PiのIPアドレスであるX.X.X.X:8000にアクセスする。
<p align="center">
  <img src="https://github.com/Bringing-IoT-closer-to-everyone/Arduino/blob/69bd78c0cf5a5ef16920759cfb80e0a976b4bf83/readme_source/htmlview.png", width="50%">
</p>

家電を操作することができる。

## セッティング
### Arduino
ir_data_commonに赤外線波形の共通部分を入れる。
ir_data_mainには、それ以外の部分を入れる。

### Raspberry_Pi
WebIOPiにて環境を構築する。

## 参考文献
WebIPOi: https://webiopi.trouch.com/

## 著者について
[学校](https://www.okako.okayama-c.ed.jp/)
