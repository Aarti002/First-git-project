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
	cout<<"Smallest element at : ";
	cin>>k;
	int a;
	
	priority_queue<int> maxh;
	for(i=0;i<n;i++)
	{
		cin>>a;
		maxh.push(a);
	}
	for(i=0;i<n-k;i++)
	maxh.pop();
	cout<<maxh.top()<<endl;
/*	max_h.push(a[0]);

	for(i=1;i<n;i++)
	{cout<<a[i]<<" "<<i+1<<endl;
		while(a[i]<max_h.top() && a[i]!=max_h.top())
		{cout<<"***\n";
			h.push(max_h.top());
			max_h.pop();
		}
		max_h.push(a[i]);
		while(!h.empty())
		{cout<<"____\n";
			max_h.push(h.top());
			h.pop();
		} 
		
		
	}
	while(!max_h.empty()){
	cout<<max_h.top()<<endl;
	max_h.pop();}*/
	
	return 0;
}
