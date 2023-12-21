import webiopi
import time
import syslog

GPIO = webiopi.GPIO

LED1PIN = 23
LED2PIN = 24

led1on = 0
led1off = 0
led2on = 0
led2off = 0

g_led1active = 0
g_led2active = 0

def setup():
	GPIO.setFunction( LED1PIN, GPIO.OUT )
	GPIO.setFunction( LED2PIN, GPIO.OUT )

def loop():
	global led1on,led1off,led2on,led2off
	if g_led1active:
		led1off = 0
		if (led1on == 0):
			GPIO.digitalWrite( LED1PIN, True)
			webiopi.sleep( 0.2 )
			GPIO.digitalWrite( LED1PIN, False)
			led1on = 1
		else:
			GPIO.digitalWrite( LED1PIN, False)
	else:
		led1on = 0
		if (led1off == 0):
			GPIO.digitalWrite( LED1PIN, True)
			webiopi.sleep( 0.2 )
			GPIO.digitalWrite( LED1PIN, False)
			led1off = 1
		else:
			GPIO.digitalWrite( LED1PIN, False)
			
	if g_led2active:
		led2off = 0
		if (led2on == 0):
			GPIO.digitalWrite( LED2PIN, True)
			webiopi.sleep( 0.2 )
			GPIO.digitalWrite( LED2PIN, False)
			led2on = 1
		else:
			GPIO.digitalWrite( LED2PIN, False)
	else:
		led2on = 0
		if (led2off == 0):
			GPIO.digitalWrite( LED2PIN, True)
			webiopi.sleep( 0.2 )
			GPIO.digitalWrite( LED2PIN, False)
			led2off = 1
		else:
			GPIO.digitalWrite( LED2PIN, False)

@webiopi.macro
def ChangeLedActive( led, active ):
	global g_led1active, g_led2active
	
	syslog.syslog('active = {}'.format(active))
	
	if 1 == int(led):
		g_led1active = int(active)
	if 2 == int(led):
		g_led2active = int(active)
