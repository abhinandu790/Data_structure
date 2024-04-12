#include"Question1lab1.cpp"
int main()
{
    
 Array<int>MyArray;
   
    int choice, value, position,key;

    do{
        cout << "\nMenu:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at a index\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from a index\n";
        cout << "7. Find the index of a given element\n";
        cout << "8. Display\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                MyArray.insert_at_beg(value);
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                MyArray.insert_at_end(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> position;
                MyArray.insert_at_index(value, position);
                break;
            case 4:
                MyArray.delete_at_beg();
                break;
            case 5:
                MyArray.delete_at_end();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                MyArray.delete_at_index(position,key);
                break;
            /*    
            case 7:
                cout << "Enter element to find index: ";
                cin >> value;
                int index = MyArray.findIndex(value);
                if (index != -1) {
                    cout << "Element " << value << " found at index " << index << endl;
                } else {
                    cout << "Element not found." << endl;
                }
                break;
                */
            case 8:
                MyArray.display();
                break;
            case 9:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                
              
        }
		}while(choice!=9);
        
    }

    


