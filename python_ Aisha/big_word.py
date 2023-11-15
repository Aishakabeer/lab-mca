def find(words):
    longest=""
    for i in words:
         if len(words)>len(longest):
             longest=words
             return len(longest)
words=["apple","bannana","cherry"]
l=find(words)
print("length of longest word ",l)

