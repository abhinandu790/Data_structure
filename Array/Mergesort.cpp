#include<iostream>
using namespace std;
void merge_sort(int A[],int B[],int C[],int A_LB,int A_UB,int B_LB,int B_UB)
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
int main()
{
	int A[4]={2,4,5,10};
	int B[5]={0,3,6,7,9,};
	int C[9];
	merge_sort(A,B,C,0,3,0,4);
	for(int i=0;i<9;i++)
	{
		cout<<C[i]<<",";
	}
	return 0;
}

