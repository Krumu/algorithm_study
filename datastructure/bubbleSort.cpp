//bubble sort
#include <iostream>
#include <array>

constexpr int arr_size = 8;
std::array <int, arr_size> arr = {31,24,32,123,32,12,53,64};
void printArray(const std::array<int, arr_size> &arr);
void bubbleSort(std::array <int, arr_size> &arr );

int main(){
    std::cout << "before sorting: ";
    printArray(arr);

    bubbleSort(arr);

    std::cout << "after sorting: ";
    printArray(arr);

    return 0;
}

void bubbleSort(std::array <int, arr_size> &arr ){
    int size = arr.size();
    for(int i = 0; i < size-1; i++ ){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

void printArray(const std::array<int, arr_size> &arr){
    int size = arr.size();
    for(int i=0;  i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

}