#include<iostream>
using namespace std;

int main()
        {   const int i=10;
            int arr[i]={12,32,43,1,54,15,64,3,23,13};
            cout<<"In the Normal Order:"<<endl;
    for (int a = 0; a <i; a++) {

            cout << arr[a] << "  ";
    }

cout<<endl;

         cout<<"In the Reverse Order:"<<endl;
     for (int a = 10-1; a>=0; a--) {
            cout << arr[a] << "  ";
    }
        }
