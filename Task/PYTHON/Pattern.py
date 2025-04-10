n=int(input("Enter N : "))
for i in range(1,n):
    print("*"*i)



n=int(input("Enter N : "))
for i in range(1,n):
    print(" "*(n-i)," *"*i)


n=int(input("Enter N : "))
for i in range(n,0,-1):
    print("*"*i)



n=int(input("Enter N : "))
for i in range(n,0,-1):
    print(" "*(n-i)," *"*i)


n=int(input("Enter N : "))
for i in range(1,n):
    print(" "*(n-i)," 1"*i)


n=int(input("Enter N : "))
for i in range(n,0,-1):
    print(" "*(n-i)," 1"*i)


n=int(input("Enter N : "))
for i in range(1,n):
    print(" "*(n-i),str(n)*i)

for i in range(1,10):
    for j in range(1,i):
        print(j,end=" ")
    print()


for i in range(10,0,-1):
    for j in range(1,i):
        print(j,end=" ")
    print()


alph=65
for i in range(0,5):
    print(" "*(5-i),end=" ")
    for j in range(0,i+1):
        print(chr(alph),end=" ")
        alph+=1
    alph=65
    print()


for i in range(9,0,-1):
    print(" "*(9-i),str(i)*i)


for i in range(1,10):
    print(" "*(10-i),str(i)*i)
