#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int binary_search(int a[],int st,int end,int n)
{
		int mid=st+(end-st)/2;
		if((mid==0 || a[mid]>=a[mid-1]) && (mid==n-1 || a[mid]>=a[mid+1]))
		return mid;
		else if(mid>0 && a[mid-1]>a[mid])
		return binary_search(a,st,mid-1,n);
		else
		return binary_search(a,mid+1,end,n);
}

int main()
{
	int n,key;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Give index of peak elements: \n";
	cout<<binary_search(a,0,n-1,n)<<endl;
	return 0;
}
