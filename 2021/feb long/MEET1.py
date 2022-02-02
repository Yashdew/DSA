def calculate(time):
    hh = int(time[:2])
    mm = int(time[3:5])
    if time[6]=='A':
        if hh!=12:
            sum=0
            sum = sum + (hh*60)+mm
            return sum
        else:
            sum=0
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
            time = input()
            starttime = time[:8]
            endtime = time[9:]
            starttimevalue = calculate(starttime)
            endtimevalue = calculate(endtime)
            array = []
            if starttimevalue <= realtimevalue & realtimevalue <= endtimevalue:
                array.append(1)
            else:
                array.append(0)
            for i in array:
                print(i, end=" ")
t = input()
t = int(t)
main(t)

