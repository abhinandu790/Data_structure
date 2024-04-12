#include "Question8lab2.h"
#include<stack>
#include<algorithm>
#include<cctype>
using namespace std;


template <typename T>
string ExpressionConverter<T>::infixToPostfix(string infix) {
    stack<char> operators;
    string postfix;
}
        for (char c : infix) {
        if (c == ' ' || c == '\t') {
            continue; 
        } else if (isdigit(c) || isalpha(c)) {
            postfix += c;
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();
        } else { 
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

template <typename T>
string ExpressionConverter<T>::infixToPrefix(string infix) {
    stack<char> operators;
    string prefix;

    reverse(infix.begin(), infix.end());

    for (char &c : infix) {
        if (c == ' ' || c == '\t') {
            continue; 
        } else if (isdigit(c) || isalpha(c)) {
            prefix += c;
        } else if (c == ')') {
            operators.push(c);
        } else if (c == '(') {
            while (!operators.empty() && operators.top() != ')') {
                prefix += operators.top();
                operators.pop();
            }
            operators.pop(); /
        } else { 
            while (!operators.empty() && precedence(operators.top()) > precedence(c)) {
                prefix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        prefix += operators.top();
        operators.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

template <typename T>
int ExpressionConverter<T>::precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

