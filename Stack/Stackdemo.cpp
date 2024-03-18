#include"Stack.cpp"
int main()
{
	Stack<int>mystack;
	cout<<"is Stack empty: "<<mystack.isEmpty()<<endl;
	mystack.Push(5);
	mystack.Push(6);
	mystack.Push(8);
	mystack.Push(9);
	cout<<"is stack full:"<<mystack.isFull()<<endl;
	cout<<"Peak element of Stack:"<<mystack.Peak()<<endl;
	mystack.Pop();
	cout<<"Peak element of Stack after poping="<<mystack.Peak()<<endl;
	cout<<"Status="<<mystack.Status()<<endl;
	cout<<"--------------------------------------------"<<endl;
	int size,n;
	int s[100];
	cout<<"Enter the size of Stack:";
	cin>>size;
	cout<<"Enter the elments:";
	for(int i=0;i<n;i++)
{
	cin>>s[i];
}
Stack<int>my_stack(n-1,size,s);
cout<<"is stack empty:"<<my_stack.isEmpty()<<endl;
cout<<"is stack full:"<<my_stack.isFull()<<endl;
my_stack.Pop();
my_stack.Push(5);
cout<<"Peak element of stack:"<<my_stack.Peak()<<endl;
cout<<"status:"<<my_stack.Status()<<endl;
return 0;	
}
