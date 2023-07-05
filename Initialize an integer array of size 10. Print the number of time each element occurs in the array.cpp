#include <iostream>
using namespace std;
int main()
{
    int Arr[]={8,4,6,1,6,9,6,1,9,8};
    int size= sizeof(Arr)/sizeof(Arr[0]);

    for (int i =0; i <size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (Arr[i] == Arr[j])
            {
                count++;
            }
        }
        cout << Arr[i] <<" found "<< count<< " times " << endl;
    }
}
