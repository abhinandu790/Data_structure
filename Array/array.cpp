#include"array.h"
template<class T>
Array<T>::Array()
{
	LB=1;
	UB=0;
}
template<class T>
Array<T>::Array(int LB,int UB,T x[])
{
	int i=LB;
while(i<=UB){
A[i] = x[i];
i++;
}
}
template<class T>
void Array<T>::insert_at_end(T key)
{
	UB=UB+1;
	A[UB]=key;
}

template<class T>

void Array<T>::insert_at_beg(T key)
{
	UB=UB+1;
	int k=UB-1;
	while (k>=LB)
	{
		A[k+1]=A[k];
		k=k-1;
	}
	A[LB]=key;
}

template<class T>
void Array<T>::insert_at_index(T key,int pos)
{
	UB=UB+1;
	 int k=UB-1;
	while (k>=pos)
	{
		A[k+1]=A[k];
		 k=k-1;
	}
	A[pos]=key;
	
	
}
template<class T>
void Array<T>::delete_at_end(T)
{
	if(UB>=LB)
	{
		UB=UB-1;
	}
	else
	{
		cout<<"Array is empty!"<<endl;
	}
}
template<class T>
void Array<T>::delete_at_beg(T )
{
	if(UB>=LB)
	{
		for(int i=LB+1;i<=UB;i++)
		{
			A[i-1]=A[i];
		}
		UB=UB-1;
	}
	else
	{
		cout<<"Array is empty!"<<endl;
	}
}

template<class T>
void Array<T>::delete_at_index(T key,int pos)
{
	if(LB<=pos<=UB)
	{
		int k=pos+1;
	
    	while(k<=UB)
	  {
		A[k-1]=A[k];
		k+=1;
    	}
	UB=UB-1;
}
	else
	{
		cout<<"Out of boundary"<<endl;
	}
}
template<class T>
int Array<T>::linear_search(T key)
{
	int index=-1;
	int i=LB;
	while(i<=UB)
	{
		if(A[i]==key)
		{
			index=i;
			break;
		}
		i+=1;
	}
	return index;
}
template<class T>
int Array<T>::binary_search(T target)
{

while (LB<UB)
	{
		int mid= (LB+UB)/2;
		if(A[mid]==target)
		{	
		 return mid;
    	}
	else if (A[mid]<target)
    	{
		 LB=mid+1;
    	}
	else if (A[mid]>target)
    	{
	     UB=mid-1;
    	}
}
return -1;
}
/*
 template<class T>
 int Array<T>::findmin()
 {
 	int main=LB;
 	for(int j=LB+1;j<=UB;j++)
 	{
 		if (A[j]<A[min]) 
 		{
 			min=j;
		 }
 			
		 }
		 return min;
	 }
	 */
	template <class T>
	void Array<T>::swap(int p, int q){
	
	 T temp=A[p];
	 A[p]=A[q];
	 A[q]=temp;
}

template<class T>
void Array<T>::selectionsort()
{
	int i,j;
	for(i=LB;i<UB;i++)
{
	int min=i;
	for(j=i+1;j<=UB;j++)
	{
		if(A[j]<A[min])
		{
		min=j;	
		}
	}
	if(min=!1)
	{
		swap(i,min);
	}
}
}

template<class T>
void Array<T>::bubblesort()
{
	int i,j;
	for(i=LB;i<UB;i++)
	{
		for(j=LB;j<UB-i+LB;j++)
		{
		if(A[j]>A[j+1])
		{
			swap(j,j+1);
			}	
		}
	}
}
                
template<class T>
int Array<T>::partition(int LB,int UB)
{
	int j=LB-1;
	int pivot=A[UB];
	int i=LB;
	while(i<=UB-1)
	{
		if(A[i]<pivot){
			
		
		j=j+1;
		swap(A[i],A[j]);
			}
			i+=1;
		}
			swap(A[j+1],A[UB]);
			
			return j+1;
			
}

template<class T>
int Array<T>::quick_sort(int LB,int UB)

{
	if(LB<UB)
	{
		int p=partition(LB,UB);
		quick_sort(LB,p-1);
		quick_sort(p+1,UB);
	}
}

template<class T>
void Array<T>::merge_sort(T A[], T B[], T C[], int A_LB, int A_UB,int B_LB,int B_UB )   
 {
 	int k=0;
 	int i=A_LB;
 	int j=B_LB;
 	for(;i<=A_UB && j<=B_UB;k++)
 	{
 		if(A[i]<B[j])
 		{
 			C[k]=A[i];
 			i++;
 			
		 }
		 else if(B[j]<A[i])
		 {
		 	C[k]=B[j];
		 	j++;
		 }
		 else
		 {
		 	C[k]=B[j++];
		 	C[++k]=A[i++];
		 }
	 }
	 while(i<=A_UB)
	 {
	 	C[k++]=A[i++];
	 	
	 }
	 while(j<=B_UB)
	 {
	 	C[k++]=B[j++];
	 }
   }  
template<class T>
void Array<T>::rotate_clockwise(int k)
   {
   	int n=UB-LB+1;
   	k=k%n;
   	if(k<0)
   	{
   		k+=n;
   		
	   }
	   T* temp=new T[n];
	   for(int i=0;i<n;++i)
	   {
	   	temp[(i+k)%n]=A[i];
	   }
	   for(int i=0;i<n;++i)
	   {
	   	A[i]=temp[i];
	   }
	   delete[]temp;
   }
template<class T>
void Array<T>::rotate_anticlockwise(int k)
   {
   	int n=UB-LB+1;
   	k=k%n;
   	if(k<0)
   	{
   		k+=n;
   		
	   }
	   T* temp=new T[n];
	   for(int i=0;i<n;++i)
	   {
	   	temp[i]=A[(i+k)%n];
	   	
	   }
	   for(int i=0;i<n;++i)
	   {
	   	A[i]=temp[i];
	   }
	   delete[]temp;
   }
   
template<class T>
void Array<T>::print_distinct_element()
	{
	
	 int n=UB-LB+1;
	 cout<<"Distinct Elements:";
	 for(int i=1;i<n;++i)
	{
	
	 bool isDistinct=true;
	 for(int j=0;j<i;++j)
	{
	 if(A[i]==A[j])
	{
	 isDistinct=false;
 	 break;
	}
	}
	 if(isDistinct)
	{
	 cout<<A[i]<<" ";
	}
	}
	 cout<<endl;
	}
template<class T>
void Array<T>::generate_frequency_table()
	{
	  int n=UB-LB+1;
	  cout<<"Frequency Table:"<<endl;
	  for(int i=1;i<n;++i)
	{
	  int count=1;
	  for(int j=i+1;j<n;++j)
	{
	  if(A[i]==A[j])
	{
	   ++count;
	}
	}
	   bool isCounted=false;
	   for(int k=0;k<i;++k)
	{
	  if(A[i]==A[k])
	{
	  isCounted=true;
      break;
	}
	 }
	   if(!isCounted)
	{
	   cout<<A[i]<<" : "<<count<<endl;
	   }
	}
	}
	   

template<class U>
ostream& operator<<(ostream& os,Array<U> M)
{
	int i;
	for(i=M.LB;i<=M.UB;i++)
	{
		os<<M.A[i]<<" ";
	}
		os<<endl;
		return os;
	}
	
