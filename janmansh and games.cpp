#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    for(int i=1; i<=y; i++)
	   {
	       x+=y;
	   }
	   if(x%2==0)
	   cout<<"Janmansh\n";
	   else cout<<"jay\n";
	}
	return 0;
}