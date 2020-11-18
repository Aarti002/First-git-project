#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <queue>
#include <map>
#include <bits/stdc++.h>


using namespace std;

// we need to find out first k those pairs which has highest frequency 
struct myComp {
constexpr bool operator()( pair<int, int> const& a, pair<int, int> const& b) 
        const noexcept 
    { 
        return a.second < b.second; 
    } 
}; 

int main()
{
	int k,i,n,x;
	cin>>n>>k;
	int a[n];
	map<int,int> mp;
	priority_queue<pair<int,int>,vector<pair<int,int> >,myComp > pq;
	for(i=0;i<n;i++){
	cin>>a[i];
	mp[a[i]]++;}
	map<int,int> :: iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	{
		pq.push(make_pair(it->first,it->second));
	}
	//priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > :: iterator itr;
	//for(i=0;i<(n-k);i++)
	//pq.pop();
	int s=0;
	while(!pq.empty() && s<k)
	{
		cout<<pq.top().first<<" "<<pq.top().second<<endl;
		pq.pop();
		s++;
	}
	return 0;
}
