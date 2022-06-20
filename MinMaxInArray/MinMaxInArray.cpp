#include<iostream>

void FindMinMax(int* arr, int size);

void FindMinMax(int* arr, int size){
    int max = 0;
    int min;

    for(int i=0;i<size;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }

    min = max;

    for(int i=0;i<size;i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }

    std::cout << "Max: " << max << " Min: " << min << std::endl;
}

int main(){
    int* arr;
    int size;

    std::cout << "size of array: ";
    std::cin >> size;

    for(int i=0;i<size;i++){
        std::cin >> arr[i];
    }

    FindMinMax(arr, size);

    return 0;
}