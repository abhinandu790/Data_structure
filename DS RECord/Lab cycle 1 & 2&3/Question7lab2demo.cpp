#include "Question7lab2.cpp"
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the two-way stack: ";
    cin >> size;

    TwoWayStack<int> tws(size);

    
    int val;
    cout << "Enter values for Stack 1 (-1 to stop):" << endl;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        tws.push1(val);
    }

    
    cout << "Enter values for Stack 2 (-1 to stop):" << endl;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        tws.push2(val);
    }

    
    cout << "Popping from Stack 1:" << endl;
    while (!tws.isEmpty1()) {
        cout << "Pop from Stack 1: " << tws.pop1() << endl;
    }

    
    cout << "Popping from Stack 2:" << endl;
    while (!tws.isEmpty2()) {
        cout << "Pop from Stack 2: " << tws.pop2() << endl;
    }

    return 0;
}

