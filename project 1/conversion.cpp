#include<iostream>
#include"conversion.h"
using namespace std;
int main()
{
	int result;
	cout<<"Select the measurement system: 1. Meter and Centimeter"<<endl;
	cout<<"                               2. Feet and Inches "<<endl;
	cout<<"Select Option:";
	cin>>result;
	if(result=1)
	{ 
	LengthConverter1 L1;
	cin>>L1;
	cout<<"Meter and Centimeter: "<<L1<<endl;
	}
	else if(result=2)
	{
		LengthConverter2 L1;
		cin>>L1;
		cout<<"Feet and Inches: "<<L1<<endl;
	}
	else if(result=!1,2)
	{
	cout<<"INVALID INPUT";	
	}
	return 0;
}

