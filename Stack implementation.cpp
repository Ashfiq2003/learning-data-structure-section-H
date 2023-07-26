#include <iostream>
#define size 5

using namespace std;

class Stack {

public:
    int arr[size];
    int top = -1;

    int push(int a){
        if(top >= size-1){
            cout<<"stack is full..."<<endl;
            return 0;
        }
        arr[++top] = a;
        return 0;
    }

    int pop(){

        if(top < 0){
            cout<<"stack is empty..."<<endl;
            return 0;
        }

        --top;

        return 0;
    }

    void printStack(){
        for(int i=0; i<=top; i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};


int main()
{
    Stack stc;
    stc.push(10);
    stc.push(30);
    stc.push(50);
    stc.printStack();
    stc.pop();
    stc.pop();
    stc.printStack();
    return 0;

}
