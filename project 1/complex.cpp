	#include<iostream>
	#include"complex.h"
	using namespace std;
	int main()
	{
	complex c1,c2,c3,c5;
	cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<"SUM :"<<c3<<endl;
	c5=c1*c2;
	cout<<"PRODUCT :"<<c5;
	cout<<"COMPLIMENT :";
	~c1;	
	return 0;	
	}

