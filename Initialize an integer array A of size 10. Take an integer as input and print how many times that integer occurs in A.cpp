#include <iostream>

using namespace std;

int main() {
    int Arr[] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    int snum;
    int count = 0;

    cout << "The Number U wanna Search: ";
    cin >> snum;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == snum)
         {
            count++;
        }
    }

    cout << "The number comes:"<<count << endl;

}
