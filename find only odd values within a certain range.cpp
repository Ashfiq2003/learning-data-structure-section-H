#include <iostream>
using namespace std;
void fnodd(int x, int y) {
    if (x % 2 == 0)
        {
        x++;
    }
    int num = x;
    while (num <= y) {
        cout << num << " ";
        num += 2;
    }
}

int main()

{
    int sv, ev;

      cout << "Starting value: ";

    cin >> sv;
    cout << "Ending value: ";
    cin >> ev;

    cout << "Output:\n";
    fnodd(sv, ev);

}
