//selection sort 
#include <iostream>
#include <array>

constexpr int arr_size = 8;
std::array <int, arr_size> arr = {31,24,32,123,32,12,53,64};
void selectSort(std::array<int, arr_size> &arr);
void printArray(const std::array<int, arr_size> &arr);

int main(){
    std::cout << "before sorting: ";
    printArray(arr);

    selectSort(arr);

    std::cout << "after sorting: ";
    printArray(arr);

    return 0;
}


void selectSort(std::array<int, arr_size> &arr){
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

void printArray(const std::array<int, arr_size> &arr){
    int size = arr.size();
    for(int i=0;  i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

}