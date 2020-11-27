#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[],int st,int end,int ele)
{
	int mid;
	while(st<=end)
	{
		mid=st+(end-st)/2;
		if(a[mid]==ele)
		return mid;
		else if(a[mid]>ele)
		{
			end=mid-1;
		}
		else
		st=mid+1;
	}
	return -1;
}
int binary_searchr(int a[],int st,int end,int ele)
{
	int mid;
	while(st<=end)
	{
		mid=st+(end-st)/2;
		if(a[mid]==ele)
		return mid;
		else if(a[mid]>ele)
		{
			st=mid+1;
		}
		else
		end=mid-1;
	}
	return -1;
}


int peak_point(int a[],int low,int high,int n)
{
	int mid=low+(high-low)/2;
	if((mid==0 || a[mid-1]<=a[mid]) && (mid==n-1 || a[mid+1]<=a[mid]))
	return mid;
	
	else if(mid>0 && a[mid-1]>a[mid])
	return peak_point(a,low,mid-1,n);
	else
	return peak_point(a,mid+1,high,n);
}


int main()
{
	int n,k,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	int pp=peak_point(a,0,n-1,n);
	cout<<pp<<" = peak point!\n";
	int f=binary_search(a,0,pp-1,k);
//	for(i=0;i<(n-pp)/2;i++)
//	swap(a[pp+i],a[n-1-i]);

	int s=binary_searchr(a,pp,n-1,k);
	cout<<f<<" "<<s<<endl;
	if(f==-1 && s==-1)
	cout<<"Can't find it!";
	else
	cout<<"Caught u: "<<max(f,s);
	return 0;
}
