class color:
    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
    
    def check(self,a,b,c):
        if self.a==self.b:
            return 1
        elif self.b==self.c:
            return 1
        elif self.c==self.a:
            return 1
        else:
            return 0

def main():
    a, b, c = input().split()
    obj = color(a,b,c)
    status = obj.check(a,b,c)
    if status==1:
        print("YES")
    else:
        print("NO")

main()

    
        