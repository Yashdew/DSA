class record:
    def __init__(self,track,wind,maxSpeed,velocity):
        self.track = track
        self.wind = wind
        self.maxSpeed = maxSpeed
        self.velocity = velocity
        #self.boltTiming = 9.58
        
    def checkRecord(self,track,wind,maxSpeed,velocity):
        totalCondition = float(self.track) * float(self.wind) * float(self.maxSpeed) * float(self.velocity)
        chefTime = 100.0 / totalCondition
        chefTime = round(chefTime,2)
        if 9.58 > chefTime:
            return True
        else:
            return False

def main():
    testcases = int(input())
    for X in range(0,testcases):
        track,wind,maxSpeed,velocity = input().split()
        obj = record(track,wind,maxSpeed,velocity)
        result = obj.checkRecord(track,wind,maxSpeed,velocity)
        if(result == True):
            print("YES")
        else:
            print("NO")

main()
