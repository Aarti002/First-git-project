#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


int rotated_pos(int a[],int n)
{
	int prev,next,st=0,end=n-1,mid;
	while(st<=end)
	{
		if(a[st]<=a[end])
		return st;
		mid=(st+end)/2;
		next=(mid+1)%n;
		prev=(mid+n-1)%n;
		if(a[mid]<=a[next] && a[mid]<=a[prev])
		return mid;
		else if(a[mid]>=a[st])
		st=mid+1;
		else if(a[mid]<=a[end])
		end=mid-1;
	}
	return  -1;
}

int binary_search(int a[],int st,int end,int val)
{
	int mid;
	while(st<=end)
	{
		mid=(st+end)/2;
		if(a[mid]==val)
		return mid;
		else if(a[mid]>val)
		end=mid-1;
		else if(a[mid]<val)
		st=mid+1;
	}
	return -1;
}

int main()
{
	int n,i;
	cin>>n;
	int a[n],d;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter value to be searched: ";
	cin>>d;
	int ind_min=rotated_pos(a,n);
	int ind1=binary_search(a,0,ind_min-1,d);
	int ind2=binary_search(a,ind_min,n,d);
	if(ind1==-1 && ind2==-1)
	cout<<"Not present!"<<endl;
	else if(ind1!=-1)
	cout<<"At: "<<ind1<<endl;
	else
	cout<<"At: "<<ind2<<endl;
	return 0;
}
