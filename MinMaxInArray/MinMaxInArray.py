#!/usr/bin/python3

def FindMax(arr):
    max = 0
    for i in arr:
        if i > max:
            max = i

    return max

def FindMin(arr, max):
    min = max
    for i in arr:
        if i < min:
            min = i
    return min

arr = [8, 7, 9, 10, 11, 54, 43, 34, 87]
max = FindMax(arr)
min = FindMin(arr, max)

print("Min: ", min, " Max: ", max)