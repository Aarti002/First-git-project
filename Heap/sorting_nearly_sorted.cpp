#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

void sort_by_k(int a[],int size,int k)
{
	priority_queue<int,vector<int>,greater<int> > pq(a,a+k+1);
	int ind=0;
	for(int i=k+1;i<size;i++)
	{
		a[ind++]=pq.top();
		pq.pop();
		pq.push(a[i]);
	}
	while(!pq.empty())
	{
		a[ind++]=pq.top();
		pq.pop();
	}
}

void print_arr(int a[],int n)
{
	cout<<"Sorted array: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}


int main()
{
	int n,i,k;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort_by_k(a,n,k);
	print_arr(a,n);
	return 0;
}
