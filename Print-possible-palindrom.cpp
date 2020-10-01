/**
*@file
*@breif prints all possible palindrom of a string seperated by spaces
**/


#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

/**
*@brief Checks wheather given string is palindrom or not
*@param i as starting index j as last index and string which is to be checked
*@returns 'boolean'
**/

bool is_palindrom(int i,int j,string s)
{
	int flag=0;
	while(i<=j)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
		i++;
		j--;
	}
	if(flag==1)
	return false;
	else
	return true;
}

/**
*@brief Recursively this function check each substring of given string if its a palindrom then put that string in vector 'allpal'
*@param vector of vector 'allpal' which keep all palindrom string in it 'currstr' has each substring which is to be check 'start' starting index of the string
*       'end' last index of the string s
*@returns 'void'
**/

void all_pal(vector<vector<string> > &allpal,vector<string> &currstr,int start,int end,string s)
{
	if(start>=end)
	{
		allpal.push_back(currstr);
		return ;
	}
	for(int i=start;i<end;i++)
	{
		if(is_palindrom(start,i,s))
		{
			currstr.push_back(s.substr(start,i-start+1));
			all_pal(allpal,currstr,i+1,end,s);
			currstr.pop_back();
		}
	}
}

/**
*@brief it just call that 'all_pal' function to perform main operation
*@param string s
*@returns 'void'
**/

void allpalindrom(string s)
{
	vector<vector<string> > allpal;
	vector<string> currstr;
	all_pal(allpal,currstr,0,s.length(),s);
//	vector<vector<string> > ::iterator it;
	for(int i=0;i<allpal.size();i++)
	{
		for(int j=0;j<allpal[i].size();j++)
		cout<<allpal[i][j]<<" ";
		cout<<endl;
	}
	cout<<allpal.size()<<endl;
}


int main()
{
	string s;		
	cin>>s;		/*checking all palindroms in given string*/
	allpalindrom(s);
	return 0;
}
