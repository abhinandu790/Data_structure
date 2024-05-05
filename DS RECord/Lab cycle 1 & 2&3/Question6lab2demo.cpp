#include <iostream>
#include "Question6lab2.cpp"

using namespace std;

int main() {
    Dequeue<int> dq;
    char choice;
	int value;

    do {
        cout << "\na. Insert element at front";
        cout << "\nb. Insert element at rear";
        cout << "\nc. Delete element from front";
        cout << "\nd. Delete element from rear";
        cout << "\ne. Display queue";
        cout << "\nf. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Enter element to insert at front: ";
                cin >> value;
                dq.insertFront(value);
                dq.display(cout);
                break;
            case 'b':
                cout << "Enter element to insert at rear: ";
                cin >> value;
                dq.insertRear(value);
                dq.display(cout);
                break;
            case 'c':
                dq.deleteFront();
                dq.display(cout);
                break;
            case 'd':
                dq.deleteRear();
                dq.display(cout);
                break;
            case 'e':
                dq.display(cout);
                break;
            case 'f':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'f');

    return 0;
}

