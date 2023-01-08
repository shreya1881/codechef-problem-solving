#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int pa,pb,qa,qb;
	    cin>>pa>>pb>>qa>>qb;
	    int a=max(pa,pb);
	    int b=max(qa,qb);
	    if(a<b) cout<<"P\n";
	    else if(b<a) cout<<"Q\n";
	    else cout<<"TIE\n";
	}
	return 0;
}