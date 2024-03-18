#include"array.cpp"
int main()
{
	int a;
	Array<int>MyArray;
	MyArray.insert_at_end(3);
	MyArray.insert_at_end(5);
	MyArray.insert_at_end(7);
	cout<<"Array after insert at end:"<<MyArray<<endl;
	MyArray.insert_at_beg(4);
	MyArray.insert_at_beg(9);
	MyArray.insert_at_beg(0);
	MyArray.insert_at_beg(5);
	cout<<"Array after insert at beg:"<<MyArray<<endl;
	MyArray.insert_at_index(1,5);
	MyArray.insert_at_index(2,3);
	MyArray.insert_at_index(6,4);
	cout<<"Array after insert at index:"<<MyArray<<endl;
	MyArray.delete_at_end(3);
    cout<<"Array after Deletion at end:"<<MyArray<<endl;
	MyArray.delete_at_beg(2);
    cout<<"Array after Deletion at beg:"<<MyArray<<endl;
	MyArray.delete_at_index(1,3);
	cout<<"Array after Deletion at index:"<<MyArray<<endl;
	MyArray.selectionsort();
	cout<<"Array after selection sort:"<<MyArray<<endl;
	MyArray.bubblesort();
    cout<<"Array after Bubble sort:"<<MyArray<<endl;
    cout<<"Enter a integer:";
    cin>>a;
    cout<<"Position of "<<a<<"in the array [Binary Search]:"<<MyArray.binary_search(a)<<endl;
    cout<<"Position of "<<a<<"in the array [Linear Search]:"<<MyArray.linear_search(a)<<endl;
    cout<<"-----------------------------------------------"<<endl;
    
   
  

	Array<float>MyfArray;
	MyfArray.insert_at_end(3.5);
	MyfArray.insert_at_end(7.5);
	MyfArray.insert_at_end(9.2);
	cout<<"Array after instertion at end"<<MyfArray<<endl;
	MyfArray.insert_at_beg(8.1);
	MyfArray.insert_at_beg(7.2);
	MyfArray.insert_at_beg(9.6);
	cout<<"Array after insertion at beginng:"<<MyfArray<<endl;
	MyfArray.insert_at_index(4.2,3);
	MyfArray.insert_at_index(1.3,6);
	MyfArray.insert_at_index(3.9,5);
	cout<<"Array after insertion at index"<<MyfArray<<endl;
	
	MyfArray.selectionsort();
	cout<<"Array after Selection sort:"<<MyfArray<<endl;
	MyfArray.delete_at_end(4);
    cout<<"Array after Deletion at end:"<<MyfArray<<endl;
	MyfArray.delete_at_beg(6);
    cout<<"Array after Deletion at beg:"<<MyfArray<<endl;
	MyfArray.delete_at_index(7.5,3);
	cout<<"Array after Deletion at index:"<<MyfArray<<endl;
    MyfArray.quick_sort(MyfArray.LB,MyfArray.UB);
	cout<<"Array after Quick sort:"<<MyfArray<<endl;


	/*
	 cout<<"Enter an number to search in the array:";
    cin>>a;
    
    cout<<"Position of element in the array [Binary Search]:"<<MyfArray.binary_search(6.1)<<endl;
    cout<<"Position of element in the array [Linear Search]:"<<MyfArray.linear_search(7.4)<<endl;
*/
   
	 MyfArray.generate_frequency_table();
	/* MyfArray.rotate_clockwise(1);*/
	 cout<<"Array:"<<MyfArray<<endl;
	 MyfArray.print_distinct_element();
	 

	

	
	return 0;
}
























