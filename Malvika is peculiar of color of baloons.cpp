#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int counta=0,countb=0;
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i]=='a')
	        counta++;
	        else
	        countb++;
	    }
	    cout<<min(counta,countb)<<endl;
	    
	}
	return 0;
}
