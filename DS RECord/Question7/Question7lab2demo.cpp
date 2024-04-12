#include <iostream>
#include "Question7lab2.cpp"

using namespace std;


int main() {
    TwoWayStack<int> tws;

    // Input for Stack 1
    int val;
    cout << "Enter values for Stack 1 (-1 to stop):" << endl;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        tws.push1(val);
    }

    // Input for Stack 2
    cout << "Enter values for Stack 2 (-1 to stop):" << endl;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        tws.push2(val);
    }

    // Pop and display elements from Stack 1
    cout << "Popping from Stack 1:" << endl;
    while (!tws.isEmpty1()) {
        cout << "Pop from Stack 1: " << tws.pop1() << endl;
    }

    // Pop and display elements from Stack 2
    cout << "Popping from Stack 2:" << endl;
    while (!tws.isEmpty2()) {
        cout << "Pop from Stack 2: " << tws.pop2() << endl;
    }

    return 0;
}

