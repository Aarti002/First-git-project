#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

bool isValid(int a[],int n,int k,int rg)
{
	int i,sum=0,cnt=1 ;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum>=rg)
		{
			cnt++;
			sum=a[i];
		}
	if(cnt>k)
	return false;
	}
	
	
	return true;
}


int main()
{
	int n,i,stu;
	cin>>n;
	int a[n],mx=0,sum=0;
	for(i=0;i<n;i++){
	cin>>a[i];
	sum+=a[i];
	mx=max(mx,a[i]);}
	cin>>stu;
	int st=mx,res=-1;
	int end=sum,mid;
	if(stu<=n){
	while(st<=end)
	{
		mid=(st+end)/2;
		if(isValid(a,n,stu,mid)==true)
		{
			res=mid;
			end=mid-1;
		}
		else
		st=mid+1;
	}}
	cout<<res<<" minimum allocated pages.\n";
	return 0;
}
