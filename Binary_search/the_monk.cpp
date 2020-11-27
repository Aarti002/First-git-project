#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n],j;
		int ans=INT_MIN;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		i=0;j=0;
		while(i<n && j<n)
		{
			if(b[j]>=a[i])
			{
				ans=max(ans,j-i);
				j++;
			}
			else
			i++;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
