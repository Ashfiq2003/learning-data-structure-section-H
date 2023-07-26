#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(string input) {
    stack<char> charStack;
    for (char c : input) {
        charStack.push(c);
    }

    string reversedString = "";
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}

int main() {
    string input;
    cout << "Enter a string to reverse: ";
    cin >> input;

    string reversed = reverseString(input);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
