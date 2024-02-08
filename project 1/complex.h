#include<iostream>
using namespace std;
class complex
{
	float img,real;
	public:
		complex()
		{
			img=0;
			real=0;
		
		}
	complex(float img,float real)
	{
	this->img=img;
	this->real=real;
	}
	friend ostream& operator<<(ostream&os, complex c)
	{
	os<<c.real<<"+"<<c.img<<"i"<<endl;
	return os;
	}
	friend istream & operator >>(istream&is,complex&c)
	{
		cout<<"value of real number : ";
		is>>c.real;
		cout<<"value of img number : ";
		is>>c.img;
		return is;
	}
	complex operator+(complex second)
	{
		complex sum;
		sum.real=this->real+second.real;
		sum.img=this->img+second.img;
		return sum;
	}
	friend complex operator *(complex A,complex B)
	{
	complex product;
	product.real=A.real*B.real-A.img*B.img;
	product.img=A.real*B.img+A.real*B.real;
	return product;
}
	void operator ~(){
		real=real;
		img=-(img);
		if(img<0)
		{
			cout<<real<<img<<"i"<<endl;
			
		}
		else
		{
			cout<<real<<" + "<<img<<"i"<<endl;
		}
	
		
	}
	
	
};



