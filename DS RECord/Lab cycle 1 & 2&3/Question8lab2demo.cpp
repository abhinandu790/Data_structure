#include <iostream>
#include "Question8lab2.cpp"

using namespace std;

int main() {
    string infixExpression;
    cout << "Enter infix expression: ";
    getline(cin, infixExpression);

    string postfix = infixToPostfix(infixExpression);
    string prefix = infixToPrefix(infixExpression);

    cout << "Postfix expression: " << postfix << endl;
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}


