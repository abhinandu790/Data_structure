#include"Question1lab1.h"
int size;
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
void Array<T>::delete_at_end()
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
void Array<T>::delete_at_beg( )
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
void Array<T>::delete_at_index(int key,int pos)
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
	void display()
	{
        if (size == 0) {
            cout << "Array is empty.\n";
        } else {
            cout << "Array elements: ";
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

	for
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
	
	}

