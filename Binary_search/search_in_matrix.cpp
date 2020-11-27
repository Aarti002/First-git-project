#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int binary_mat_search(int *a[],int n,int m,int ele)
{
	int i=0,j=m-1;
	while(i>=0 && i<n && j>=0 && j<m)
	{
		if(a[i][j]==ele)
		return a[i][j];
		else if(a[i][j]>ele)
		j--;
		else
		i++;
	}
}


int main()
{
	int n,k,m,i,j;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>k;
	int ans=-1;//=binary_mat_search(a[][m],n,m,k);
	i=0;
	j=m-1;
	while(i>=0 && i<n && j>=0 && j<m)
	{
		if(a[i][j]==k)
		{
			ans=a[i][j];
			break;
		}
		else if(a[i][j]>k)
		j--;
		else
		i++;
	}
	cout<<ans<<endl;
	return 0;
}
