//insertion sort 
#include <iostream>
#include <array>

const int arr_size = 8;
std::array <int, arr_size> arr = {31,24,32,123,32,12,53,64};
void insertSort(std::array<int, arr_size> &arr);
void printArray(const std::array<int, arr_size> &arr);

int main(){
    std::cout << "before sorting: ";
    printArray(arr);

    insertSort(arr);

    std::cout << "after sorting: ";
    printArray(arr);

    return 0;
}


void insertSort(std::array<int, arr_size> &arr){
    int size = arr.size();
    int i, j;
    for(i =1; i< size ; i++){
        int current = arr[i];
        for(j = i-1; j >= 0; j--){
            if(arr[j] > current){
                arr[j+1] = arr[j];
            }
            else
                break;
        }
         arr[j+1] = current;
    }
    return;
}

void printArray(const std::array<int, arr_size> &arr){
    int size = arr.size();
    for(int i=0;  i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

}