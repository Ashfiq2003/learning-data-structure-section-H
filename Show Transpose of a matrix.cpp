#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 4;

int main() {
    const int real[rows][cols] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
    int trans[cols][rows];

    cout << "The Given Matrix is: " << endl << endl;

    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j < cols; j++)
        {
            cout << real[i][j] << "     ";
            trans[j][i] = real[i][j];
        }
        cout << endl << endl;
        }

    cout << "Transposed of the Given Matrix is :" << endl;
    for (int i = 0; i < cols; i++)
        {
        for (int j = 0; j < rows; j++)
        {
            cout << trans[i][j] << "     ";
        }
        cout << endl;
        }

}
