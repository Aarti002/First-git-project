#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

struct myComp{
	constexpr bool operator()(pair<int,int> const& a,pair<int,int> const& b)
	const noexcept{
	return a.second <b.second;
	}
};

int main()
{
	int n,k,i;
	cin>>n;
	int a;
	map<int,int> mp;
	for(i=0;i<n;i++)
	{
		cin>>a;
		mp[a]++;
	}
	priority_queue<pi,vector<pi>,myComp> pq;
	map<int,int> :: iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	{
		pq.push(make_pair(it->front,it->second));
	}
	while(!pq.empty())
	{
		cout<<pq.top().front<<" "<<pq.top().second()<<endl;
		pq.pop();
	}
	return 0;
}
