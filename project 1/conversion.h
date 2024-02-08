#include<iostream>
using namespace std;
class LengthConverter1
{
	private:
		float feet;
		float centimeters;
	public:
		LengthConverter1()
		{
			feet=0.0;
			centimeters=0.0;
			
		}
		LengthConverter1(float feet,float centimeters)
		{
			this->feet=feet;
			this->centimeters=centimeters;
		}
		LengthConverter1& operator=(float meters)
		{
			feet=static_cast<float>(meters  *3.28084);
			centimeters=(meters*39.3701)-(feet*12);
			return *this;
		}
		friend istream& operator>>(istream& is, LengthConverter1& l1)
		{
			cout<<"Enter the distance in meter: ";
			float meters;
			is>>meters;
			l1=meters;
			return is;
		}
	friend ostream& operator<<(ostream& os, const LengthConverter1& l1)
	{
		os<<endl<<"Feet: "<<l1.feet<<endl<<"Centimeter: "<<l1.centimeters<<endl;
		return os;
	}
			
};
class LengthConverter2
{
	private:
		float meter,centimeters;
    public:
    	LengthConverter2()
    	{
    		meter=0.0;
    		centimeters=0.0;
		}
	LengthConverter2& operator=(float feet)
	{
		float totalcentimeters=feet*30.48;
		this->meter=float(totalcentimeters/100);
		this->centimeters=totalcentimeters-this->meter*100;
		return *this;
	}
	friend istream& operator>>(istream& is, LengthConverter2& l1)
	{
		float feet;
		is>>feet;
		l1=feet;
		return is;
	}
	friend ostream& operator<<(ostream& os, const LengthConverter2& l1)
    {
	os<<endl<<"Meter: "<<l1.meter<<endl<<"Centimeter: "<<l1.centimeters<<endl;
	return os; 
     }
};


