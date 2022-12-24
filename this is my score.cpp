#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p[n],s[n];
	    int total=0;
	    for(int i=0; i<n; i++)
	    cin>>p[i]>>s[i];
	    for(int i=1; i<9; i++)
	    {
	        int max=0;
	        for(int j=0; j<n; j++)
	        {
	            if(i==p[j] && s[j]>max)
	            {
	                max=s[j];
	            }
	        }
	        total+=max;
	    }
	    cout<<total<<endl;
	}
	return 0;
}