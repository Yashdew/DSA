class dice:
    def __init__(self,num):
        self.num = num
    def chef_Dice(self,num):
        if num==1:
            return 20
        elif num==2:
            return 36
        elif num==3:
            return 51
        elif num==4:
            return 60
        else:
            rem = num%4
            ans = (num-rem)//4
            ans = ans*44
            if rem == 0:
                ans+=16
            elif rem == 1:
                ans+=32
            elif rem == 2:
                ans+=44
            elif rem == 3:
                ans+=55

        return ans


def main():
    testcases = int(input())
    for X in range(0,testcases):
        num = input()
        num = int(num)
        obj = dice(num)
        ans = obj.chef_Dice(num)
        print(ans)

if __name__ == "__main__":
    main()