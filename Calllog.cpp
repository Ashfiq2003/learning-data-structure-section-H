#include <iostream>
#include<stdlib.h>
using namespace std;

class Stack
    {
    string callTime[5];
    int top;

public:
    Stack()
        {
        top = -1;
    }

    void push(string x)
        {
        if (top>= 4)
                {
            cout << "Call Log Full" << endl;
            return;
            }




        callTime[++top] = x;
        cout << "Incoming Call/Outgoing Call: " << x << endl;
        }

    void display()
        {
        if (top < 0)
                {
            cout << "Call Log Empty" << endl;
            return;
                }
        for (int i = top; i >= 0; i--)
        {
            cout <<"Call Time:"<< callTime[i] <<endl;
        }
        cout << endl;
        }


};

int main()
        {
    Stack callLog;
    callLog.push("5:10 pm ");
    callLog.push("6:30 pm ");
    callLog.push("8:12 pm ");
    callLog.push("9:25 pm ");
    callLog.push("10:18 pm ");
    callLog.push("12:12 pm ");

    callLog.display();

    return 0;
}
