#include"array.cpp"
int main()
{
	Array<int>MyArray;
	MyArray.insert_at_end(3);
	MyArray.insert_at_end(1);
	MyArray.insert_at_end(7);
	cout<<MyArray;
	Array<float>MyfArray;
	MyfArray.insert_at_end(3.5);
	MyfArray.insert_at_end(7.5);
	MyfArray.insert_at_end(9.2);
	cout<<MyfArray;
	return 0;
}
