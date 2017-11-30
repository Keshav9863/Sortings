#include<iostream>
using namespace std;
void part(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
	int *a,n,i;
	cout<<"Enter Range:";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	part(a,0,n-1);
	cout<<"After Merge Sort:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void part(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		part(a,beg,mid);
		part(a,mid+1,end);
		merge(a,beg,mid,end);
	}
}
void merge(int a[],int beg,int mid,int end)
{
	int lindex,rindex,bindex,b[10];
	lindex=beg;
	rindex=mid+1;
	bindex=beg;
	while(lindex<=mid && rindex<=end)
	{
		if(a[lindex]<a[rindex])
		{
			b[bindex]=a[lindex];
			lindex++;
		}
		else
		{
			b[bindex]=a[rindex];
			rindex++;
		}
		bindex++;
	}
	while(lindex<=mid)
	{
		b[bindex]=a[lindex];
		bindex++;lindex++;
	}
	while(rindex<=end)
	{
		b[bindex]=a[rindex];
		bindex++;rindex++;
	}
	for(int i=beg;i<=end;i++)
	{
		a[i]=b[i];
	}
}
