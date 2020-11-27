#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr,int size)
{
	int st=0,end=size-1,mid;
	while(st<=end)
	{
		if(arr[st]<=arr[end])			//as we know in case of sorted array a[0]<a[n-1] but not in case of rotated array
		return st;
		mid=(st+end)/2;
		int next=(mid+1)%size;					//to check element just after mid element 
		int prev=(mid+size-1)%size;//to check element just before mid element, using 
									//both cases so that we can check wheather elment on both side of mid is greater or not
		if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
		return mid;
		if(arr[mid]>=arr[st])
		st=mid+1;
		if(arr[mid]<=arr[end])
		end=mid-1;
	
	}
	return -1;
}


int main()
{
	vector<int> a;
	vector<int> b;
	
	int n,i,ind,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	
	}
	
	ind=binary_search(a,n);
	if(ind==-1)
	cout<<"Not possible\n";
	else
	cout<<ind<<endl;
	return 0;
}
