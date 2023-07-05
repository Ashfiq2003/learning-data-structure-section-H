#include <iostream>
using namespace std;
struct Student
{
    string name;
    int id;
    float cgpa;
};

void bsort(Student arr[],int n)
                {
                for(int i =0;i< n-1;i++)
                    {
                        for(int j =0;j<n-i-1;j++)
                        {
                            if(arr[j].cgpa>arr[j+1].cgpa)
                            {
                            swap(arr[j],arr[j+1]);
                            }
                        }
                    }
                }

int main()
        {
    const int numStudents=4;
    Student st[numStudents];

    cout <<"Enter Student Details:" <<endl;

    for(int i=0;i<numStudents;i++) {
        cout<<"Student No: " <<i+1<<endl;
        cout<<"Name: ";
        cin>>st[i].name;
        cout<<"ID: ";
        cin>>st[i].id;
        cout<<"CGPA: ";
        cin>>st[i].cgpa;
        cout<<endl;
    }



    bsort(st,numStudents);
    cout<<"Sorted Student Details:" <<endl;
    for(int i = 0; i < numStudents; i++)
    {
        cout<<"Name: "<< st[i].name<<"    <=======>    ";
        cout<<"ID: "<< st[i].id<<"     <=======>     ";
        cout<<"CGPA: "<< st[i].cgpa<<endl<<endl;
    }



}
