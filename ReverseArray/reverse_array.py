#!/usr/bin/python3

def ReverseArray(arr):

    n = len(arr)

    start, end = 0, n-1
    while(start < end):
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1

    return arr

arr = [7, 8, 6, 5, 4, 3, 2, 1]
ReverseArray(arr)
print(arr)