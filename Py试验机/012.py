import datetime
import sys
import time
import math

new = datetime.datetime(2023,1,1,0,0,0)
while True:
	to = datetime.datetime.now()
	day = (new-to).days
	second_all = (new-to).seconds
	second = second_all%60
	minute = second_all/60%60
	hour = second_all/60/60
	if hour > 24:
		hour = hour -24
		
	hour = math.floor(hour)
	minute = math.floor(minute)
	
	sys.stdout.write("离2023年还有"+str(day)+"天"+str(hour)+"小时"+str(minute)+"分钟"+str(second)+"秒"+'\r')
	sys.stdout.flush()
	time.sleep(1)
	print("离2023年还有"+str(day)+"天"+str(hour)+"小时"+str(minute)+"分钟"+str(second)+"秒"+'\r')
	
	
