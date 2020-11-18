#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n,k,i;
	stack<int> max_h;
	stack<int> h;
	cin>>n;
	cout<<"Number of largest element need to find : ";
	cin>>k;
	int a;
	
	priority_queue<int,vector<int>, greater<int> > minh;
	for(i=0;i<n;i++)
	{
		cin>>a;
		minh.push(a);
	}
	for(i=0;i<n-k;i++)
	{
//	cout<<minh.top()<<endl;
minh.pop();}
	for(i=0;i<k;i++)
	{
	cout<<minh.top()<<endl;
minh.pop();}
//cout<<minh.top()<<endl;
	return 0;
}
