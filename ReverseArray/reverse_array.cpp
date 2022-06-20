#include<iostream>

void swap(int a, int b);

void ReverseArray(int arr[], int size);

void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void ReverseArray(int arr[], int size){
    int start, end, temp;
    start = 0;
    end = size - 1;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start = start  + 1;
        end = end - 1;
    }
}

void printArray(int* arr, int size){
    for(int i = 0;i<size;i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int* arr;
    int size;
    std::cout << "Give the size of the array: ";
    std::cin >> size;

    std::cout << "Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        std::cin>> arr[i];
    }

    std::cout << "Before Reverse: ";

    printArray(arr, size);

    ReverseArray(arr, size);

    std::cout << "After Reverse: ";

    printArray(arr, size);

    return 0;
}