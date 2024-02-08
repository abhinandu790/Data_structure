#include<iostream>
#include"3dvectors.h"
using namespace std;
int main()
{
	vectors3d v1,v2,v3,v4,v5;
	cin>>v1;
	cin>>v2;
	cout<<"Vectors:";
	cout<<v1;
	cout<<"        "<<v2;
	cout<<"SUM :";
	v3=v1+v2;
	cout<<v3;
	cout<<"DOT PRODUCT :";
	v4=v1*v2;
	vectors3d v6;
	v6=v1^v2;
	cout<<endl;
	cout<<"CROSS PRODUCT :";
	v5=v1*v2;
	cout<<v5;
	return 0;
}
