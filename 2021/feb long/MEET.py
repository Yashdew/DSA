def calculate( time, realtime ):
    starting = time[6]
    hhs = int(time[:2])
    mms = int(time[3:5])

    ending = time[15]
    hhe = int(time[9:11])
    mme = int(time[12:15])
    if time[6]== 'A':
        if time[15] == 'A':
            if hhs!=12:
                sum=0
                sum = sum + (hh*60)+mm
                return sum
            else:
                sum=0
                sum = sum + mm
                return sum
        elif time[15] == 'P':
            if hh!=12:
                sum=720
                sum = sum + (hh*60)+mm
                return sum
            else:
                sum=720
                sum = sum + mm
                return sum    
    elif time[6]=='P':
        if hh!=12:
            sum=720
            sum = sum + (hh*60)+mm
            return sum
        else:
            sum=720
            sum = sum + mm
            return sum

def main(t):
    for i in range(t):
        realtime = input()
        realtimevalue = calculate(realtime)
        num = input()
        num = int(num)
        for x in range(num):
            starttime = input()
            starttimevalue = calculate(starttime,realtimevalue)
            print(starttimevalue)

# t = input()
# t = int(t)
# main(t)
num = input()
print(calculate(num))
num = input()
print(calculate(num))
num = input()
print(calculate(num))
num = input()
print(calculate(num))
num = input()
print(calculate(num))
