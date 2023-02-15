#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    float x1, x2, x3, v1, v2, s1, s2;
	    cin>>x1>>x2>>x3>>v1>>v2;
	    
	    s1 = (x3-x1)/v1;
	    s2 = (x2-x3)/v2;
	    
	    if (s1<s2) cout<<"Chef";
	    else if (s1==s2) cout<<"Draw";
	    else cout<<"Kefa";
	    
	    cout<<endl;
	}
	return 0;
}