



# sachin = open("deepak.txt", "w")
# sachin.write  ("sachin , 20BCS2743")
# sachin = open("deepak.txt", "r")
# sachin = open("deepak.txt", "a")
# sachin.close()
# sachin = open("deepak.txt","r")

import os

print("directory path:",os.getcwd())
os.chdir("my directory")
print("current working directory", os.getcwd())
os.rename("sachin.txt","oops/txt")
print("file renamed")
os.removed("sachin.txt")
print("file removed from directory")
