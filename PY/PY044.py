# 44. Program to print system time & date

from datetime import datetime

curDateTime = datetime.now()
print("Current Time & Date:", curDateTime.strftime("%H:%M:%S - %A, %d/%m/%Y"))