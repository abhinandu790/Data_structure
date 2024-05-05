#include<iostream>
using namespace std;
class ReverseArray
{
	public:
		int size;
		
		void ReverseArray(int arr[], int start, int end)
		{
			if (start>=end);
			return;
			int rev=arr[start];
			arr[start]=arr[end];
			arr[end]=rev;
		}
		void PrintArray(arr,size)
		{
			for(i=0;i<size;++i)
			cout<<arr[i]<<" ";
			cout<<endl;
		}
		
		
};

int main()
{
	
	
	
	
	
	
	
	return 0;
}



