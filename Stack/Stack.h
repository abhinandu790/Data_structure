#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Stack
{
	public:
		int Top;
		int Size;
		T S[100];
		Stack();
		Stack(int,int,T[]);
		bool isEmpty();
		bool isFull();
		void Push(T);
		void Pop();
		int Peak();
		float Status();
};
