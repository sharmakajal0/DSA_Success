#!/usr/bin/python3

def Rearrange(arr):
    
    j = 0
    for i in range(len(arr)):
        if arr[i] < 0:
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
            j = j + 1
    print(arr)
    
arr = [-1, 2, -3, 4, 5, 6, -7, 8, 9]
Rearrange(arr)