//quick sort 1. pivot , 2. partitioning
#include <iostream>
#include <array>

const int arr_size = 8;
std::array <int, arr_size> arr = {31,24,32,123,32,12,53,64};

void printArray(const std::array<int, arr_size> &arr);
void quickSort(std::array<int, arr_size> &arr, int left, int right);
int partition(std::array<int, arr_size> &arr, int left, int right);

int main(){
    std::cout << "before sorting: ";
    printArray(arr);

    quickSort(arr, 0, arr_size-1);

    std::cout << "after sorting: ";
    printArray(arr);

    return 0;
}
int partition(std::array<int, arr_size> &arr, int left, int right){
    int pivot = (left + right)/2;
    // pivot 위치 변경
    int temp = arr[pivot];
    arr[pivot] = arr[right];
    arr[right] = temp;

    pivot = right;

    while(left < right){   
        while(arr[pivot] > arr[left]){
            left++;
        }
        while(left < right && arr[pivot] <= arr[right]){
            right--;
        }
        
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        }
    temp = arr[pivot];
    arr[pivot]=arr[right];
    arr[right] = temp;

    return right;
}

void quickSort(std::array<int, arr_size> &arr, int left, int right){
    if(left < right){
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }
}

void printArray(const std::array<int, arr_size> &arr){
    int size = arr.size();
    for(int i=0;  i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}