#include <iostream>
#include <stack>
using namespace std;

string decimalToBinary(int num) {
    stack<int> binaryStack;

    if (num == 0) {
        binaryStack.push(0);
    } else {
        while (num > 0) {
            binaryStack.push(num % 2);
            num /= 2;
        }
    }

    string binary = "";
    while (!binaryStack.empty()) {
        binary += to_string(binaryStack.top());
        binaryStack.pop();
    }

    return binary;
}
`
