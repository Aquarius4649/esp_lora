import RPi.GPIO as GPIO
import time

GPIO_PIN = 18

GPIO.setmode(GPIO.BCM)
GPIO.setup(GPIO_PIN,GPIO.IN)

while True:
    if(GPIO.input(GPIO_PIN) == GPIO.HIGH):
        print("反応あり")
        time.sleep( 1 ) 
        
    else:
        print("反応なし")
        time.sleep( 1 ) 
