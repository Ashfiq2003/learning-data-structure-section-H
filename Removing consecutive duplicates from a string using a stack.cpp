#include <iostream>
#include <stack>
using namespace std;

string removeConsecutiveDuplicates(string s) {
    stack<char> charStack;
    string result = "";

    for (char c : s) {
        if (charStack.empty() || charStack.top() != c) {
            charStack.push(c);
            result += c;
        }
    }

    return result;
}
