#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Array
{
	public:
		int LB,UB;

	T A[100];
	
		Array();
		Array(int,int,T[]);
		void insert_at_end(T);
		void insert_at_beg(T);
		void insert_at_index(T,int);
		void delete_at_end(T);
		void delete_at_beg(T);
		void delete_at_index(T,int);
		int linear_search(T);
		int binary_search(T);
		void selection_sort(T);
		void bubblesort();
	/*	int findmin();*/
		void swap(int,int);
		int quick_sort(int,int);
		void selectionsort();
		int partition(int,int);
		void merge_sort(T[],T[],T[],int,int,int,int);
		void rotate_clockwise(int);
		void rotate_anticlockwise(int);
		void print_distinct_element();
		void generate_frequency_table();
		template <class U>
	friend ostream& operator<<(ostream&, Array<U>);
	
};

