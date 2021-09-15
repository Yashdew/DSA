class strong:
    def __init__(self,lengthofString, numPattern, string):
        self.lengthofString = lengthofString
        self.numPattern = numPattern
        self.string = string
    
    def checkPattern(self,lengthofString, numPattern, string):
        flag=0
        count=0
        for i in range(0, int(self.lengthofString) ):
            if self.string[i] == '*':
                count=count+1
                if count == int(self.numPattern):
                    flag=1
                    break
            else:
                count=0
        
        if flag==1:
            return True
        else:
            return False
        

def main():
    testcases = int(input())
    for X in range(0,testcases):
        lengthofString, numPattern = input().split()
        string = input()
        obj = strong(lengthofString, numPattern, string)
        status = obj.checkPattern(lengthofString, numPattern, string)

        if status == True:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()