#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    int b[1001] {0};
	    for(int i=0; i<n; i++){
	        b[a[i]]++;
	    }
	    int *max = max_element(b,b+1001);
	    int min= count(b, b+1001, (*max));
	    if(min == 1) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}