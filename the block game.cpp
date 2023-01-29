#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans=0;
	    int b = n;
	    while(n!=0){
	        int a = n%10;
	        ans = ans*10 + a;
	        n/=10;
	    }
	    if(b==ans) cout<<"wins\n";
	    else cout<<"loses\n";
	}
	return 0;
}