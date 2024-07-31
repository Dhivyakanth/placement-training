file=input("Enter the file name :")
try :
    with open(file,"r") as f:
        print(f.read())
    f.close()
except FileNotFoundError as f:
    print("Error :\n the given file is not found.\n",f)
    
