//buble sort 
#include <iostream>
#include <array>
#define arr_size 8
#include <bits/stdc++.h>
std::array <int, arr_size> arr = {31,24,32,123,32,12,53,64};

void bubbleSort(std::array<int, arr_size> &arr){
    for(int i =0; i<arr_size-1; i++){
        int min_idx = i;
        for (int j=i+1; j< arr_size; j++){
            if(arr[min_idx] > arr[j]){
                min_idx= j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i]= temp;
    }
    return;
}
int main(){
    std::cout << "before sorting: ";
    for(int i=0;  i < arr_size; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

    bubbleSort(arr);

    std::cout << "after sorting: ";
    for(int i=0;  i < arr_size; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

    return 0;
}
