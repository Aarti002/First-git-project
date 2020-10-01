#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <set>
#include <bits/stdc++.h>
using namespace std;

void all_subseq(string s,int st,int end,set<string> &ste)
{
	if(st==end)
	{
	
		ste.insert(s);
		return ;
	}
	for(int i=st;i<=end;i++)
	{
		swap(s[st],s[i]);
		all_subseq(s,st+1,end,ste);
		swap(s[st],s[i]);
	}
}


int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		string s;
		string out="";
		cin>>s;
		set<string> ste;
	//	cout<<"********\n";
		all_subseq(s,0,s.length()-1,ste);
		cout<<ste.size()<<endl;
	}
	return 0;
}
