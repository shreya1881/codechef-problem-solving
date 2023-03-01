#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int sum=0,sum1=0;
	    int arr[n];
	    for(int i=1; i<=n; i++)
	    cin>>arr[i];
	    
	    for(int i=1;i<=n; i++)
	    sum+=arr[i];
	    
	    for(int i=1;i<=n;i++){
	        if(arr[i]>k) arr[i]=k;
	        sum1+=arr[i];
	    }
	    cout<<abs(sum1-sum)<<endl;
	}
	return 0;
}
