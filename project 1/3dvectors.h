#include<iostream>
using namespace std;
class vectors3d
{
float x,y,z;
public:
vectors3d()
{
x=0;
y=0;
z=0;
	}
	vectors3d(float x,float y,float z)	
	{
	this->x=x;
	this->y=y;
	this->z=z;
	}
	friend ostream&  operator<<(ostream&os, vectors3d v)
	{
	os<<"("<<v.x<<")i+("<<v.y<<")j+("<<v.z<<")k"<<endl;
	return os;
	}
	friend istream & operator >>(istream&is,vectors3d&v)
	{
		cout<<"Enter the coefficient of x : ";
		is>>v.x;
		cout<<"Enter the coefficient of y : ";
		is>>v.y;
		cout<<"Enter the coefficient of z : ";
		is>>v.z;
		return is;
	}
	vectors3d operator+(vectors3d second)
	{
		vectors3d sum;
		sum.x=this->x+second.x;
		sum.y=this->y+second.y;
		sum.z=this->z+second.z;
		return sum;
	}
     friend vectors3d operator*(vectors3d A,vectors3d B)
	{
		vectors3d difference;
		difference.x=A.y*B.z-B.y*A.x;
		difference.y=A.x*B.z-A.z*B.x;
		difference.z=A.x*B.y-B.x*A.y;
		return difference;
	}
	friend vectors3d operator ^(vectors3d A,vectors3d B)
	{
	 vectors3d product; 
    product.x = A.x*B.x;
    product.y = A.y*B.y;
    product.z = A.z*B.z;
    cout<<product.x+product.y+product.z<<endl;
	return product;
    
	}
	
	
};
