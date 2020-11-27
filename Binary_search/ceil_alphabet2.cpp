#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

char binary_search_alpha(char s[],int n,char c)
{
	int st=0,end=n-1,mid;
	char ans=s[n-1];
	while(st<=end)
	{
		mid=(st+end)/2;
		if(s[mid]==c)
		{
		if((mid+1)<=n-1)
		return s[mid+1];
		else
		return s[mid];}
		else if(s[mid]>c)
		{
			ans=min(s[mid],ans);
			end=mid-1;
		}
		else
		st=mid+1;
	}
	return ans;
}

int main()
{
	int i,n;
	cin>>n;
	char s[n];
	char ele;
	for(i=0;i<n;i++)
	cin>>s[i];
	
	sort(s,s+n);
	for(i=0;i<n;i++)
	cout<<s[i]<<" ";
	cin>>ele;
		char next_ceil=binary_search_alpha(s,n,ele);
	cout<<next_ceil<<endl;
	return 0;
}
