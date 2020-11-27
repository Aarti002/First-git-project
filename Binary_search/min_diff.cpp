#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[],int n,int key)
{
	int st=0,end=n-1,mid,mn_p=n-1;
	while(st<=end)
	{
		mid=(st+end)/2;
		if(a[mid]==key)
		return mid;
		else if(a[mid]>key)
		{
			mn_p=min(mid,mn_p);
			end=mid-1;
		}
		else
		st=mid+1;
	}
	cout<<"Minimum of all greatest: "<<mn_p<<endl;
	return mn_p;
}


int main()
{
	int n,key,i;
	cin>>n;
	int a[n],x;
	for(i=0;i<n;i++)
	cin>>a[i];
	//sorted given
	cin>>key;
	int min_diff=binary_search(a,n,key); 		//position of that given key
//	if(min_diff<=n-1)
	x=min(abs(key-a[min_diff]),abs(key-a[min_diff-1]));
	
	cout<<"Got the minimum diffrence amoung all: "<<x<<endl;
	return 0;
}
