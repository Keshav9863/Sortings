#include<iostream>
using namespace std;
int main()
{
	int *a,n,temp,i,j,min;
	cout<<"Enter Range:";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"Elements After Selection sort:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
