#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int val)
{
	int st=0,end=n-1,mid;
	while(st<=end)
	{
		mid=(st+end)/2;
		if(a[mid]==val)
		return mid;
		if(a[mid-1]==val && (mid-1)>=st)
		return (mid-1);
		if(a[mid+1]==val && (mid+1)<=end)
		return (mid+1);
		if(a[mid]>val)
		end=mid-2;
		if(a[mid]<val)
		st=mid+1;
	}
	return -1;
}

int main()
{
	int n,i,val;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>val;
	int ans=binarysearch(a,n,val);
	cout<<ans<<endl;
	return 0;
}
