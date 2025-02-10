//To find the value of f(x) at the defined value of x of range x0 to xn by using Lagrange interpolation.

#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	float x1, x[10], y[10], sum=0, product;
	
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cout<<"Enter the value of x["<<i<<"] y["<<i<<"]:";
		cin>>x[i]>>y[i];
		cout<<endl;		
	}
	
	cout<<"Enter the value for which y to determine:\n";
	cin>>x1;
	
	for(i=0; i<=n; i++)
	{
		product=1;
		for(j=0; j<=n; j++)
		{
			if(i!=j)
				product*=(x1-x[j])/(x[1]-x[j]);
		}
		sum=sum + product*y[i];
	}
	cout<<"THE SUM IS "<<sum;
	
	return 0;
}
