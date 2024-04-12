#include<iostream>
#include <string>
#include <stack>
using namespace std;
template <typename T>
class ExpressionConverter {
public:
        string infixToPostfix(string infix);
        string infixToPrefix(string infix);

private:
    int precedence(char op);
};


