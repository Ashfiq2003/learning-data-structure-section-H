#include<iostream>
using namespace std;
int main()
        {
int arr1[] ={1,4,6,3,6,9};
int arr2[] ={5,3,7,1,2,6};


                

int size1= sizeof(arr1)/ sizeof(arr1[0]);
int size2= sizeof(arr2)/ sizeof(arr2[0]);

    int celements[min(size1, size2)];
    int count = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                celements[count++] = arr1[i];
                break;
            }
        }
    }

    if (count == 0) {
        cout << "No common Herwe";
    } else {
        for (int i = 0; i < count; ++i) {
            cout << celements[i] << " ,";
        }
    }

}
