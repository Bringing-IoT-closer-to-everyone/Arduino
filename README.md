# Arduino
Arduinoの赤外線発光用プログラムです

![image](https://github.com/Bringing-IoT-closer-to-everyone/Arduino/blob/c2344bafd8df5766f8d927c5dd5b5937052b1d66/image/IMG_0268.jpg)

## Overview
ローカルでインターネットに接続されているスマートフォンから家電が操作できます。

## Requirement
- Wiondows 10
- Arduino IDE 1.8.19
- 

## Usage
Raspberry PiでWebIOPiを起動し、Raspberry PiのIPアドレスであるX.X.X.X:8000にアクセスする。
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title></title>
<script type="text/javascript" src="/webiopi.js"></script>
<script type="text/javascript">
webiopi().ready( function()
{	// Initialize
	webiopi().callMacro( "ChangeLedActive", [1, 0] );
	webiopi().callMacro( "ChangeLedActive", [2, 0] );
} );

function onCheckboxLed( led )
{
	if( 1 == led )
	{
		webiopi().callMacro( "ChangeLedActive", [1, document.getElementsByName("led1")[0].checked ? 1 : 0]);
		return;
	}
	if( 2 == led )
	{
		webiopi().callMacro( "ChangeLedActive", [2, document.getElementsByName("led2")[0].checked ? 1 : 0] );
		return;
	}
}
</script>
</head>
<body>
<div style="text-align: center"><font size="8">扇風機</font><br><br>
<label><input class="big" type="checkbox" name="led1" onclick="onCheckboxLed(1)"><font size="5"><span>電　源 </span></font></label><br><br>
<br></div>

<style>
label {
    margin-right: 5px; /* ボタン同士の間隔 */
}
label input {
    display: none; /* デフォルトのinputは非表示にする */
}
label span {
    color: #333; /* 文字色を黒に */
    font-size: 14px; /* 文字サイズを14pxに */
    border: 1px solid #333; /* 淵の線を指定 */
    border-radius: 20px; /* 角丸を入れて、左右が丸いボタンにする */
    padding: 5px 20px; /* 上下左右に余白をトル */
}
label input:checked + span {
    color: #FFF; /* 文字色を白に */
    background: #FBB; /* 背景色を薄い赤に */
    border: 1px solid #FBB; /* 淵の線を薄い赤に */
}

input#check1[type="checkbox"]:checked+label::before {
	background: cornflowerblue;
}

</style>
<script>

</script>
</body>

## Features

## Reference

## Author

[school](https://www.okako.okayama-c.ed.jp/)

## Licence
