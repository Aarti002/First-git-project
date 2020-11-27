#include <stdlib.h>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int binary_search_pos(int a[],int s,int e,int val)
{
	int mid;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(a[mid]==val)
		return mid+1;
		else if(a[mid]>val)
		e=mid-1;
		else
		s=mid+1;
	}
}


int main()
{
	int t,i;
//	int a[10000000];
	int a[]={11,213,33,8,9,10,11,12,13,14,15,16,17,18,19,20,22,23,222,24,25,26,278,34,45,67,78};
	a[0]=1;
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	int ele;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"Input element to be found: ";
	cin>>ele;
	int st=0,end=1;
	while(a[end]<ele)
	{
		st=end;
		end*=2;
	}
	int pos=binary_search_pos(a,st,end,ele);
	cout<<pos<<" Got it\n";
	return 0;
	
}
