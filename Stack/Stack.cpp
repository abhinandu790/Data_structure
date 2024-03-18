#include"Stack.h"
template<class T>
Stack <T>::Stack()
{
	Top=-1;
	Size=100;
}
template<class T>
Stack<T>::Stack(int top,int size,T s[])
{
	this->Top=top;
	this->Size=size;
	int i=0;
	while(i<=Top)
	{
		S[i]=s[i];
		i++;
	}
}
template<class T>
bool Stack<T>::isEmpty()
{
	if(Top==-1)
	{
		return true;
	}
	return false;
}
template<class T>
bool Stack<T>::isFull()
{
	if(Top==Size)
	{
		return true;
	}
	return false;
}

template<class T>
void Stack<T>::Push(T key)
{
if(this->isFull()!=true)	
  {
	Top=Top+1;
	S[Top]=key;
  }
else 
{
	cout<<"Stack overflow"<<endl;
}
}
template<class T>
void Stack<T>::Pop()
{
	if(this->isEmpty()!=true)
	 {
	 	Top=Top-1;
	 }
	 else
	 {
	 	cout<<"Stack underflow"<<endl;
	 }
}
template<class T>
int Stack<T>::Peak()
{
	if(this->isEmpty()!=true)
	 {
	 	return S[Top];
	 }
	 else
	 {
	 	return NULL;
	 }
}
template<class T>
float Stack<T>::Status()
{
	return static_cast<float>(this->Top+1)/static_cast<float>(this->Size)*100;
}
