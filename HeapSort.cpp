//Programme 1st Creates the maximum heap and then sort to make minimum heap
#include<iostream>
using namespace std;
void create();
void display();
void heapsort();
int heap[10],n=0,par,ptr;
int main()
{
	int i,rn;
	cout<<"Enter Range:";
	cin>>rn;
	for(i=0;i<rn;i++)
	{
		create();
	}
	cout<<"Max heap:"<<endl;
	display();
	heapsort();
}
void create()
{
	int temp;
	cout<<"Element:";
	n=n+1;
	cin>>heap[n];
	ptr=n;
	par=ptr/2;
	while(par>=1 && heap[ptr]>heap[par])
	{
		temp=heap[ptr];
		heap[ptr]=heap[par];
		heap[par]=temp;
		ptr=par;
		par=par/2;
	}
}
void display()
{
	for(int i=1;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}
void heapsort()
{
	int tr,temp;
	tr=n;
	while(tr>=1)
	{
		temp=heap[1];
		heap[1]=heap[tr];
		heap[tr]=temp;
		ptr=1;
		bool flag=false;
		while(flag==false)
		{
			par=ptr;
			if(2*par<=n && heap[2*par]<heap[ptr])
			{
				ptr=2*par;
			}
			if(2*par+1<n && heap[2*par+1]<heap[ptr])
			{
				ptr=2*par+1;
			}
			if(par==ptr)
			{
				flag=true;
			}
			else
			{
				temp=heap[ptr];
				heap[ptr]=heap[par];
				heap[par]=temp;
			}
		}
		tr--;
	}
	cout<<"After Heap Sort:"<<endl;
	display();
}

