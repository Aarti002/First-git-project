#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <map>
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int> > ppi;

int main()
{
	int n,k,i;
	cin>>n>>k;
	int x,y;
	priority_queue<ppi,vector<ppi>,greater<ppi> > pq;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		int d=x*x+y*y;
		pq.push_back(make_pair(d,make_pair(x,y)));
	}
	while(!pq.empty())
	{
		cout<<pq.top()->first<<" points: "<<pq.top()->second.first<<" "<<pq.top()->second.second<<endl;
		pq.pop();
	}
	
	return 0;
}
