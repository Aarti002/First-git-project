#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

bool binary_search(int arr[],int size,int val)
{
	int st=0,end=size-1,mid,ans;
	while(st<=end)
	{
		mid=st+(end-st)/2;
		if(arr[mid]==val)
		return true;
		else if(arr[mid]>val)
		end=mid-1;
		else
		st=mid+1;
	}
	return false;
} 



int main()
{
	int n,i,sol,val;
	cin>>n>>sol;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	while(sol--)
	{
		int ind,j,bonus=0;
		cin>>val;
		sort(a,a+n);
		
		if(binary_search(a,n,val))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
