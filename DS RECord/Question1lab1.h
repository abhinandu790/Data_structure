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
		void delete_at_end();
		void delete_at_beg();
		void delete_at_index(int,int);
		
		void display();
		template <class U>
	friend ostream& operator<<(ostream&, Array<U>);
};
