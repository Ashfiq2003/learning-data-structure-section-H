#include <iostream>
using namespace std;

int main() {
    int Arr[] = {1, 4, 6, 3, 6, 9, 1};
    int size = sizeof(Arr)/sizeof(Arr[0]);

    bool Duplicates = false;
    for (int i = 0; i < size-1;i++)
    {
        for (int j =i+1; j<size;j++)
         {
            if (Arr[i] == Arr[j])
            {
                Duplicates = true;
                break;
            }
        }
        if (Duplicates)
        {
            break;
        }
    }

    if (Duplicates) {
        int unique[size];
        int count = 0;

        for (int i = 0; i < size; i++) {
            bool ifDuplicate = false;
            for (int j = 0; j < count; ++j) {
                if (Arr[i] == unique[j]) {
                    ifDuplicate = true;
                    break;
                }
            }
            if (!ifDuplicate)
            {
                unique[count++] = Arr[i];
            }
        }

        for (int i = 0; i < count; ++i)
         {
            cout << unique[i] << " ";
        }
    }
    else {
        cout << "Array already unique!";
    }
}
