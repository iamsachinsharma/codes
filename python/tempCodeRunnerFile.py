import os

print("directory path:",os.getcwd())
os.chdir("my directory")
print("current working directory", os.getcwd())
os.rename("sachin.txt","oops/txt")
print("file renamed")
os.removed("sachin.txt")
print("file removed from directory")
