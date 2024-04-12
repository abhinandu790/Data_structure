#include "Question10lab2.cpp"



int main() {
    string exp;
    cout << "Enter the bracket expression: ";
    getline(cin, exp);

    if (isbalanced( exp)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is not balanced." << endl;
    }

    return 0;
}

