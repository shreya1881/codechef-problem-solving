#include <iostream>
using namespace std;

int main() {
	// your code goes here;
	int t;
	cin>>t;
	while(t--)
	{
	    int r;
	    cin>>r;
	    int budget = r*1000;
	    int half = budget/2;
	    int equal = half/5;
	    cout<<equal<<endl;
	}
	return 0;
}
