#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a1=0,a2=0;
	int max1,max2;
	while(n--){
	    int s,t;
	    cin>>s>>t;
	    a1=a1+s;
	    a2=a2+t;
	    max1=max(max1,(a1-a2));
	    max2=max(max2,(a2-a1));
	}
	if(max1>max2)
	cout<<1<<" "<<max1<<endl;
	else
	cout<<2<<" "<<max2<<endl;
	return 0;
}
