#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	map<int,int>mp;
	mp.insert(pair<int,int>(0,6));
	mp.insert(pair<int,int>(1,2));
	mp.insert(pair<int,int>(2,5));
	mp.insert(pair<int,int>(3,5));
	mp.insert(pair<int,int>(4,4));
	mp.insert(pair<int,int>(5,5));
	mp.insert(pair<int,int>(6,6));
	mp.insert(pair<int,int>(7,3));
	mp.insert(pair<int,int>(8,7));
	mp.insert(pair<int,int>(9,6));
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b;
	    int add=0;
	    while(sum>0){
	        int n=sum%10;
	        int a=mp[n];
	        add+=a;
	        sum/=10;
	    }
	    cout<<add<<endl;
	}