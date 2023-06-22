#include <iostream>
using namespace std;
int main()
        {
    int arr[5] = {20, 2, 9, 1, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    int minE = arr[0];
    int maxE = arr[0];

    for (int i = 1; i < n; i++)

    {
        if (arr[i] < minE)
            minE = arr[i];
        if (arr[i] > maxE)
            maxE = arr[i];
    }
    cout << "Minimum Value: " << minE << endl;
    cout << "Maximum Value: " << maxE << endl;
        }
