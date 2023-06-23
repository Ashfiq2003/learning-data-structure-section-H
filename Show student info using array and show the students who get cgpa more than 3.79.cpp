#include<iostream>
using namespace std;

int main() {
    const int rows = 4;
    const int cols = 4;

    string arr[rows][cols] = {
        {"222", "3.50", "Rafiq",    "rafiq@gmail.com"},
        {"280", "3.90", "Shafiq",   "shafiq@gmail.com"},
        {"300", "3.80", "Mostufa",  "mostofa@gmail.com"},
        {"320", "3.78", "Zobayer",  "zobayer@gmail.com"}
    };

    for (int a = 0; a < rows; a++) {
        for (int b = 0; b < cols; b++) {
            cout << arr[a][b] << "           ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "====================================================================";
    cout << endl;
 cout << "Student who gets CGPA grater than 3.79" << endl << endl;
    for (int a = 0; a < rows; a++) {
        if (arr[a][1] > "3.79") {
            cout << "ID: " << arr[a][0] << endl;
            cout << "CGPA: " << arr[a][1] << endl;
            cout << "Name: " << arr[a][2] << endl;
            cout << "Email: " << arr[a][3] << endl;
            cout << endl;
            cout << endl;
        }
    }



    return 0;
}

