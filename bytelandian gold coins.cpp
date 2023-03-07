#include <iostream>
using namespace std;

long solve(long n){
    if(n>=12) return solve(n/2)+solve(n/3)+solve(n/4);
    else return n;
}
int main() {
	// your code goes here
	
// 	int t = 10;
// 	while(t--)
// 	{
// 	    try
// 	    {
// 	    int n;
// 	    if(cin>>n)
// 	    {
	        
// 	    cout<<solve(n)<<endl;
	        
// 	    }
// 	    else
// 	    {
// 	        throw(n);
// 	    }
// 	    }
// 	    catch(int n)
// 	    {
// 	        exit(0);
// 	    }
// 	}

long n;
while(cin>>n)
cout<<solve(n)<<endl;	
	return 0;
}
