#include"AdvancedArray.cpp"
int main(){
	Array <int> linearArray;
	char choice;
	int element,position,index,search,result;
	int key;
	/*int arr[] = {5,2,9,1,7};
	int n = sizeof(arr) / sizeof (arr[0]);
	Array <int> linearArray(0,n-1,arr);*/
	do {
		cout << "\nMenu:\n";
        cout << "a. Insertion at Beginning\n";
        cout << "b. Insertion at End\n";
        cout << "c. Insertion at a specified position\n";
        cout << "d. Deletion from Beginning\n";
        cout << "e. Deletion from End\n";
        cout << "f. Deletion from a specified position\n";
        cout << "g. Find the index of a given element\n";
        cout << "h. Display\n";
        cout << "i. Sort using Bubble Sort \n";
        cout << "j. Sort using Insertion Sort\n";
        cout << "k. Sort using Selection Sort\n";
        cout << "l. Sort using Merge Sort\n";
        cout << "m. Sort using Quick Sort\n";
        cout << "n. Linear Search\n";
        cout << "o. Binary Search\n";
        cout << "p. Rotate Right \n";
        cout << "r. Frequency \n";
        cout << "q. Rotate Left \n";
        cout << "s. Frequency list\n";
        cout << "t. List Distinct Elements \n";
        cout << "u. Exit\n ";

        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
        case 'a':
            cout << "Enter element to insert at beginning :";
            cin >> element;
            linearArray.insert_at_beginning(element);
            break;
        case 'b':
            cout << "Enter element to insert at end : ";
            cin >> element;
            linearArray.insert_at_end(element);
            break;
        case 'c':
            cout << "Enter element to insert: ";
            cin >> element;
            cout << "Enter position to insert at: ";
            cin >> position;
            linearArray.insert_at_index(element, position);
            break;
        case 'd':
            cout << "Deleted element from beginning ";
            linearArray.delete_at_beginning();
            break;
        case 'e':
            cout << "Deleted element from end";
            linearArray.delete_at_end();
            break;
        case 'f':
            cout << "Enter the position to delete from : ";
            cin >> position;
            linearArray.delete_at_index(position);
            break;
        case 'g':
            cout << "Enter the Element to find Index :";
            cin >> element;
            index = linearArray.find_index(element);
            if (index != -1) {
                cout << "Index of Element  " << element << " is " << index << endl;
            }
            else {
                cout << "Element not found in array " << endl;
            }
            break;
        case 'h':
            linearArray.display();
            break;
        case 'i':
        	cout<<"Array After Bubble Sort : ";
        	linearArray.bubble_sort();
        	linearArray.display();
        	break;
        case'j':
        	cout<<"Array After Insertion Sort : ";
        	linearArray.insertion_sort();
        	linearArray.display();
        	break;
		case 'k':
        	cout<<"Array After Selection Sort : ";
        	linearArray.selection_sort();
        	linearArray.display();
        	break;
        case 'l':
        	cout<<"Array After Merge Sort : ";
        	linearArray.merge_sort(0,linearArray.size());
        	linearArray.display();
        	break;
        case'm':
        	cout<<"array After Quick Sort : ";
        	linearArray.quick_sort(0,linearArray.size());
			linearArray.display();
			break;
		case'n':
			cout<<"Enter the key for search : ";
			cin>>key;
			result=linearArray.linear_search(key);
			if(result != -1){
				cout<<"Linear Search :Element "<<key<<" found at index "<<result<<endl;
			}
			else{
				cout<<"Linear Search :Element "<<key<<" not found "<<endl;
			}
			break;
		case 'o':
			cout<<"Enter the key for search : ";
			cin>>key;
			result=linearArray.binary_search(key);
			if(result != -1){
				cout<<"Linear Search :Element "<<key<<" found at index "<<result<<endl;
			}
			else{
				cout<<"Linear Search :Element "<<key<<" not found "<<endl;
			}
			break;
		case 'p':
			int left;
			cout<<"Enter the number of positions to rotate left :";
			cin>>left;
			linearArray.rotate_left(left);
			cout<<"Array left rotated by "<<left<<" positions. "<<endl;
			break;
		case'q':
			int right;
			cout<<" Enter the number of positions to right rotate : ";
			cin>>right;
			linearArray.rotate_right(right);
			cout<<" Array right rotated by "<<right<<" positions. "<<endl;
			break;
		case 'r':
			int freq;
			cout <<" Enter the element to find frequency : ";
			cin>>freq;
			cout<<"Frequency of element "<<linearArray.frequency(freq)<<endl;
			break;
		case's':
			cout<<"Distinct elements count : ";
			linearArray.list_distinct();
			break;
		case't':
			cout<<"Frequency List \n";
			linearArray.frequency_list();
			break;
		case'u':
			cout<<"Existing Program \n";
			break;
        default:
        	cout<<"Invalid choice ! Please enter a valid option. "<<endl;
		}
	}
	while(choice != 'u');
}


