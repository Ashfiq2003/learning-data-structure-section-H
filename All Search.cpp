#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    float cgpa;
};

void insertionSort(Student arr[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].cgpa > key.cgpa) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].cgpa > arr[j + 1].cgpa) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].cgpa < arr[minIndex].cgpa) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void displayStudents(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Name: " << arr[i].name << "\t";
        cout << "ID: " << arr[i].id << "\t";
        cout << "CGPA: " << arr[i].cgpa << endl << endl;
    }
}

int binarySearch(Student arr[], int left, int right, float cgpa) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid].cgpa == cgpa) {
            return mid;
        }

        if (arr[mid].cgpa > cgpa) {
            return binarySearch(arr, left, mid - 1, cgpa);
        }

        return binarySearch(arr, mid + 1, right, cgpa);
    }

    return -1;
}

int main()
{
    const int numStudents = 4;
    Student st[numStudents];

    cout << "Enter Student Details:" << endl;

    for (int i = 0; i < numStudents; i++)
    {
        cout << "Student No: " << i + 1 << endl;
        cout << "Name: ";
        cin >> st[i].name;
        cout << "ID: ";
        cin >> st[i].id;
        cout << "CGPA: ";
        cin >> st[i].cgpa;
        cout << endl;
    }

    while(true){
    int choice;
    cout << "Choose an operation:" << endl;
    cout << "1. Sort by CGPA using Insertion Sort" << endl;
    cout << "2. Sort by CGPA using Bubble Sort" << endl;
    cout << "3. Sort by CGPA using Selection Sort" << endl;
    cout << "4. Binary Search by CGPA" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        insertionSort(st, numStudents);
        cout << "Sorted Student Details (Insertion Sort):" << endl;
        displayStudents(st, numStudents);
        break;

    case 2:
        bubbleSort(st, numStudents);
        cout << "Sorted Student Details (Bubble Sort):" << endl;
        displayStudents(st, numStudents);
        break;

    case 3:
        selectionSort(st, numStudents);
        cout << "Sorted Student Details (Selection Sort):" << endl;
        displayStudents(st, numStudents);
        break;

    case 4:
    {
        float searchCGPA;
        cout << "Enter CGPA to search: ";
        cin >> searchCGPA;
        int index = binarySearch(st, 0, numStudents - 1, searchCGPA);
        if (index != -1)
        {
            cout << "Student found at index " << index << endl;
            cout << "Name: " << st[index].name << endl;
            cout << "ID: " << st[index].id << endl;
            cout << "CGPA: " << st[index].cgpa << endl;
        }
        else
        {
            cout << "Student with CGPA " << searchCGPA << " not found." << endl;
        }
        break;
    }

    default:
        cout << "Invalid choice. Please select a number between 1 and 4." << endl;
        break;
    }
    }

    return 0;
}
