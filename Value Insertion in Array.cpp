#include <iostream>
using namespace std;

int main() {
    int Arr[10];

    cout << "Enter 10 Element Please: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> Arr[i];
    }

    cout << "The array values are: ";
    for (int i = 0; i < 10; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

}
