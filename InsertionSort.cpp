#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp,*a,key;
	cout<<"Enter Range:";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && key<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	cout<<"Element After Insertion Sort:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
