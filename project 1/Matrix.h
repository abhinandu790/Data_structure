	#include<iostream>
	using namespace std;
	class Matrix
	{
		int rows,colum;
		public:
			int**data;
			Matrix()
			{
				rows=0;
				colum=0;
			}
			Matrix(int r, int c)
			{
				rows=r;
				colum=c;
				data=new int*[rows];
				for(int i=0;i<rows;i++)
				data[i]=new int[colum];
			}
			friend ostream& operator<<(ostream& os,Matrix& m)
			{
				for(int i=0;i<m.rows;i++)
				{
					for(int j=0;j<m.colum;j++)
					os<<m.data[i][j]<< " ";
					os<<endl;
				}
			return os;
		     }
		 friend istream& operator>>(istream& is,Matrix& m)
		 {
		 	cout<<"Enter the number of rows: ";
		 	is>>m.rows;
		 	cout<<"Enter the number of Columns: ";
		 	is>>m.colum;
		 	m.data=new int*[m.rows];
		 	for(int i=0;i<m.rows;i++)
		 	m.data[i]=new int[m.colum];
		 	cout<<"Enter the matrix elements: "<<endl;
		 	for(int i=0;i<m.rows;i++)
		 	for(int j=0;j<m.colum;j++)
		 	is>>m.data[i][j];
		 	return is;
		 }
		 Matrix operator+(Matrix& second)
		 {
		 	Matrix sum(rows,colum);
		 	for(int i=0;i<rows;i++)
		 	     for(int j=0;j<colum;j++)
		 	     sum.data[i][j]=this->data[i][j]+second.data[i][j];
		 	     return sum;
		 	     
		 }
		 friend Matrix operator*(Matrix& A,Matrix& B)
		 {
		 	Matrix product(A.rows,B.colum);
		 	for(int i=0;i<A.rows;i++)
		 	{
			 
		 	    for(int j=0;j<B.colum;j++)
		 	    {
				 
		 	    product.data[i][j]=0;
		 	        for(int k=0;k<A.colum;k++)
		 	        {
					 
		 	              product.data[i][j]+=A.data[i][k]*B.data[k][j];
		 	          }
		 	    }
		    }
		 	             return product;
		 }
		 
		 		
	};

