dict1={"a":10,"b":2,"c":3} 

str1="" 

for i in dict1: 
    str1=str1+str(dict1[i])+" " 
    str2=str1[:-1] 

print(str2[::-1]) 

