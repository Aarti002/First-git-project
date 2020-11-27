#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int size,int val)
{
	int st=0,end=size-1,mid;
	while(st<=end)
	{
		mid=st+(end-st)/2;
		if(a[mid]==val)
		return mid;
		else if(a[mid]>val)
		end=mid-1;
		else
		st=mid+1;
	}
}



int main()
{
	int n,i,sol,val;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>sol;
	while(sol--)
	{
		int ind,j,bonus=0;
		cin>>val;
		ind=binary_search(a,n,val);
		cout<<ind<<" position\n";
		for(i=0;i<=ind;i++)
		bonus+=a[i];
		cout<<ind+1<<" "<<bonus<<endl;
	}
	return 0;
}
