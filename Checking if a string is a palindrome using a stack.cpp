#include <iostream>
#include <stack>
using namespace std;

bool isPalindrome(string input) {
    stack<char> charStack;
    for (char c : input) {
        charStack.push(c);
    }

    string reversed = "";
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    return input == reversed;
}
