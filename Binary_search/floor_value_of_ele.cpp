#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int binaryscr_floor(int a[],int n,int x)
{
	int mid,st=0,end=n-1;
	int mx=0;
	while(st<=end)
	{
		mid=(st+end)/2;
		if(a[mid]==x)
		return a[mid];
		else if(a[mid]>x)
			end=mid-1;
		else{
			mx=max(a[mid],mx);
			st=mid+1;}
	}
	return mx;
}


int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int ele;
	cin>>ele;
	int ans=binaryscr_floor(a,n,ele);
	cout<<ans<<endl;
	return 0;
}
