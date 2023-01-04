#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a=n*x;
	    if(a%4==0)
	    cout<<a/4<<endl;
	    else cout<<(a/4)+1<<endl;
	}
	return 0;
}