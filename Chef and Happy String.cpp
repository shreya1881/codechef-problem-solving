#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int flag=0;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
	        flag++;
	        if(flag==3)
	        {
	            cout<<"Happy\n";
	            break;
	        }
	        }
	        else flag=0;
	    }
	    if(flag!=3) cout<<"Sad\n";
	}
	return 0;
}
