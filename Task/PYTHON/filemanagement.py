file=open("tops1.txt","w")
file.write("This is file management demo using python.")
file.close()
print("File written succesfully")

print("****************************************************")

file=open("tops1.txt","r")
print(file.read())
file.close()

print("****************************************************")


file=open("tops1.txt","a")
file.write("\nNow this file is Appended.")
file.close()
print("file appended sucessfully")

print("****************************************************")


file=open("tops2.txt","w+")
file.write("This is w+ mode using python.")
print("Current file position : ",file.tell())
file.seek(0)
print("file data :",file.read())
