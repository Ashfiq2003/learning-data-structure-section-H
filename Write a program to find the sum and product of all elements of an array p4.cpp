#include <iostream>
using namespace std;
int main()
{
    int sizes = 5;
    int num[sizes];
    cout << "Enter 5 numbers: "<<endl;
    for (int i = 0; i < sizes; i++)
    {
        cout << "Number " << i+1<< ": ";
        cin >> num[i];
    }

    int sum = 0;
    int mul = 1;

    for (int i = 0; i < sizes; i++)
    {
        sum =sum+  num[i];
        mul = mul * num[i];
    }
    cout << "The Sum is " << sum << endl;
    cout << "The Multiplication is " << mul << endl;
}
