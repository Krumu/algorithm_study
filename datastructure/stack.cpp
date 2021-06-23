// 배열로 스택구현
#include <iostream>
#include <array>

const int arr_size = 8;
class stack{
    private:
        int top;
        int size;
        std::array<int, arr_size> arr;
    public:
        void initStack(){
            top=-1;
            size= arr.size();
            std::fill(std::begin(arr), std::end(arr), 0);
        }
        void push(int value){
            if(top >= size-1){
                std::cout << "stack is full" << std::endl;
                return;
            }
            arr[++top]= value;
            return;
        }
        int pop(){
            int Idx = top;
            if(top < 0){
                std::cout << "stack is empty" << std::endl;
                return -99999;
            }
            top--;
            return arr[Idx]; 
        }

        int peak(){
            if(top < 0){
                std::cout << "stack is empty";
                return -99999;
            }
            return arr[top];
        }

        void printStack(){
            for(int i=0;  i <= top; i++)
                std::cout << arr[i] << ' ';
                std::cout << std::endl;
        }
};

int main(){
    stack Stack1;
    Stack1.initStack();

    Stack1.pop();
    Stack1.printStack();

    Stack1.push(4);
    Stack1.push(5);
    Stack1.push(3);
    Stack1.printStack();

    int val = Stack1.pop();
    Stack1.printStack();

    std::cout << "value: " << val << std::endl;
    std::cout << "top value: " << Stack1.peak() << std::endl;
    return 0;
}