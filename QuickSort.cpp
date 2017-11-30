#include<iostream>
using namespace std;
void quick(int [],int,int);
int part(int [],int,int);
int n;
int main()
{
	int *a,i;
	cout<<"Enter Range:";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quick(a,0,n-1);
	cout<<"After Quick Sort:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void quick(int a[],int beg,int end)
{
	if(beg<end)
	{
		int k=part(a,beg,end);
		quick(a,beg,k-1);
		quick(a,k+1,end);
	}
}
int part(int a[],int beg,int end)
{
	int pv,loc,strt,last,rn,temp;
	pv=beg;
	strt=beg;
	last=end;
	rn=n;
	while(rn>=1)
	{
	while(a[pv]<=a[last] && pv!=last)
	{
		last--;;
	}
	if(pv==last)
	{
		return pv;
	}
	if(a[pv]>a[last])
	{
		temp=a[pv];
		a[pv]=a[last];
		a[last]=temp;
		pv=last;
	}
	while(a[pv]>=a[strt] && pv!=strt)
	{
		strt++;
	}
	if(strt==loc)
	{
		return loc;
	}
	if(a[pv]<a[strt])
	{
		temp=a[pv];
		a[pv]=a[strt];
		a[strt]=temp;
		pv=strt;
	}
	rn--;
    }
}
