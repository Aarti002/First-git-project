#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

string LCS(string x,string y,int m,int n)
{
	int maxlen=0,i,j;
	int ind,ls[m+1][n+1];
	memset(ls,0,sizeof(ls));
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			{
				ls[i][j]=ls[i-1][j-1]+1;
				if(maxlen<ls[i][j])
				{
					maxlen=ls[i][j];
					ind=i;
				}
			}
		}
	}
	return x.substr(ind-maxlen, maxlen);
}

int main()
{
	string x="ABCBAuoi",y=x,ans="";
	reverse(y.begin(),y.end());
	int m=x.length(),n=y.length();
	ans=LCS(x,y,m,n);
	cout<<ans<<endl;
	return 0;
}
