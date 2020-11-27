#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,s=0,e=1;
	int a[]={0,0,0,1,0,1,1,1,1,1,1,0,0,1,0,1,0,0,0,1,1,1,1,1,1,0,0};
	sort(a,a+n);
	int mid,mn=1000;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(a[mid]==1)
		{
			mn=min(mn,mid);
			s=mid;
			e=mid-1;
		}
		else 
		{
			s=e;
			e*=2;
		}
	}
	cout<<"Present at: "<<mn<<endl;
	return 0;
}
