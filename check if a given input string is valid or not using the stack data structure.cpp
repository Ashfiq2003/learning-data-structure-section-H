#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> parenthesesStack;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            parenthesesStack.push(c);
        } else {
            if (parenthesesStack.empty()) {
                return false;
            }

            char topChar = parenthesesStack.top();
            parenthesesStack.pop();

            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    return parenthesesStack.empty();
}

int main() {
    string input;
    cout << "Enter a string containing parentheses: ";
    cin >> input;

    bool isValidString = isValid(input);

    if (isValidString) {
        cout << "The input string is valid." << endl;
    } else {
        cout << "The input string is not valid." << endl;
    }

    return 0;
}
