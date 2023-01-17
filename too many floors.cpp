#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=0,b=0;
	    for(int i=1; i<=10; i++)
	    {
	        if(x>=(10*(i-1)) && x<=10*i)
	        {
	            a=i;
	            break;
	        }
	    }
	    for(int i=1; i<=10; i++)
	    {
	        if(y>=(10*(i-1)) && y<=10*i)
	        {
	            b=i;
	            break;
	        }
	    }
	    cout<<abs(a-b)<<endl;
	}
	return 0;
}
