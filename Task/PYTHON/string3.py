s=input("Enter String : ")

al=0
num=0
upper=0
lower=0
space=0

for i in s:
    if i.isalpha():
        al=al+1
    elif i.isnumeric():
        num=num+1
    elif i.isspace():
        space=space+1
    if i.isupper():
        upper=upper+1
    elif i.islower():
        lower=lower+1

print("Total Alphabets : ",al)
print("Total Numerics : ",num)
print("Total spaces : ",space)
print("Total Uppercase : ",upper)
print("Total Lowercase : ",lower)
