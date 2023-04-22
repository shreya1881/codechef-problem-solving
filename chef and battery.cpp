#include <iostream>
using namespace std;
/*void time(int n){
    int k =abs(50-n);
	if(k%2==0){
	   cout<<k/2<<endl;
	 }else{
	   int m = (k/2)+2;
	   if((m*2+n)%2==1){
	       m=m+1;
	   }
	   cout<<m<<endl;
	 }
}*/

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    while(n!=50){
	        if(n>50){
	            n = n-3;
	            count++;
	        }else{
	            n = n+2;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
