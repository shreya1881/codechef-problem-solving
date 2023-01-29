#include <bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float n,x,y,a,b,d,p;
	    cin>>n>>x>>y>>a>>b;
	    p=(n/a)*x;
	    d=(n/b)*y;
	    if(p<d)
	    {
	        cout<<"PETROL"<<endl;
	    }
	    if(d<p)
	    {
	        cout<<"DIESEL"<<endl;
	    }
	    if(p==d)
	    {
	        cout<<"ANY"<<endl;
	    }
	    
	    
	    
	    
	}
	return 0;
}