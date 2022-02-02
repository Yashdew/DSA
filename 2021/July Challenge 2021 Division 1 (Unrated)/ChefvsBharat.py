def modFunc(a,b):
    return a%b

def checkOddDigitPal(basemain):
    count = 0.0
    revNum = 0.0
    tempNum = basemain

    while tempNum!=0:
        revNum = revNum*10 +tempNum%10
        count=count+1
        tempNum = tempNum/10

    if count%2==1:
        if revNum == basemain:
            return -1
    
    return count

def convertDigitPal(basemain):
    temp = basemain
    temp = temp/10
    revTemp = 0.0
    count = 0.0
    while temp != 0:
        count = count + 1
        revTemp = revTemp*10 + temp%10
        temp = temp/10

    count = float(pow(10,count)
    basemain = (basemain*count) + revTemp
    return basemain 

def solve():
    L = int(input())
    R = int(input())
    
    L = float(L)
    R = float(R)
    basePower = []
    baseMain = float(L)
    countBase = checkOddDigitPal(baseMain)

    if countBase!= -1:
        baseMain = convertDigitPal(baseMain)

    print("baseMain", baseMain)
    sum = 0.0
    for i in range(L+1,R+1):
        countPower = CheckoddDigitPal(i)
        temp = i
        if countBase!= -1:
            baseMain = convertDigitPal(baseMain)
        print("array num",temp)
        sum = sum + temp
    
    print("sum",sum)
    product = 1.0
    product = pow(baseMain,sum)
    product = modFunc(product,M)
    print(product)

def main():
    testcases = int(input())
    while testcases > 0:
        {
            solve()
        }
        
if __name__ == "__main__":
    main()