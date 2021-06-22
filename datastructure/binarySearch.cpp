// binary search
#include <iostream>
#include <array>
constexpr int arr_size = 8;
std::array <int, arr_size> arr = {12, 24, 31, 32, 50, 53, 64, 123};
int binarySearch(std::array<int, arr_size> arr, int target, int left, int right);
int main(){
    int target;
    int Idx;

    std::cout << "Enter the target value: ";
    std::cin >> target;

    if((Idx = binarySearch(arr, target, 0, arr_size-1))<0){
        std::cout << "Target variable does not exist in the array"<< std::endl;
    }
    else
        std::cout << Idx << std::endl;

}


int binarySearch(std::array<int, arr_size> arr, int target, int left, int right){
    if(left <= right){
    int mid = (left+right)/2;
    if(target == arr[mid]){
        return mid;
    }
    if(target > arr[mid]){
        return binarySearch(arr, target, mid+1, right);
    }
    else{
        return binarySearch(arr, target, left, mid-1);
    }
    }
    else
        return -1;
}