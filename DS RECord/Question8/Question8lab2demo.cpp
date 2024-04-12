#include <iostream>
#include "Question8lab2.cpp"



int main() {
    ExpressionConverter<char> converter;
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = converter.infixToPostfix(infix);
    string prefix = converter.infixToPrefix(infix);

    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;
    cout << "Prefix: " << prefix << endl;

    return 0;
}

