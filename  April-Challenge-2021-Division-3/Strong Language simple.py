import re

testcases = int(input())
for X in range(0,testcases):
    lengthofString, numPattern  = input().split()
    string = input()
    star="*"
    for x in range(1, int(numPattern) ):
        star = star + "*"
    
    #check = string.find(star)
    check = re.search(star, string).span()[0]

    if check==-1:
        print("NO")
    else:
        print("YES")