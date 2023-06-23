#include<iostream>

using namespace std;

int main()
{
   int arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
   int evenCount = 0, oddCount = 0;

   cout << "Even Numbers: ";
   for(int i = 0; i < 10; i++)
   {
      if(arr[i] % 2 == 0)
      {
         evenCount++;
         cout << arr[i] << " ";
      }
   }

   cout << "\nOdd Numbers: ";
   for(int i = 0; i < 10; i++)
   {
      if(arr[i] % 2 != 0)
      {
         oddCount++;
         cout << arr[i] << " ";
      }
   }

   return 0;
}
