def find(words):
    max1=len(words[0])
    t=words[0]
    for i in words:
         if len(i)>max1:
             max1=len(i)
    print("the longest word in list  ",t, " and length is ",max1)
words=["apple","bannana","cherry"]
find(words)


