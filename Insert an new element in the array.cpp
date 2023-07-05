#include <iostream>
using namespace std;


int main()
        {
    const int size = 10;
    int Arr[size];


    cout << "Enter 10 Values:" << endl;
    for (int i = 0; i< size;i++)
        {
        cin >> Arr[i];
    }

    cout << "The array is ";
    for (int i = 0; i < size; i++)
        {
        cout << Arr[i] <<endl;
    }
    cout << endl<<endl;

    int newValue;
    cout << "Enter an additional value: ";
    cin >> newValue;

    const int newSize = size + 1;
    int newArr[newSize];

    for (int i = 0; i < size; i++)
        {
        newArr[i] = Arr[i];
    }

    newArr[newSize - 1] = newValue;

    cout << "New array values:\n ";
    for (int i = 0; i < newSize; ++i)
        {
        cout << newArr[i] <<endl;
    }
    cout << endl;

}
