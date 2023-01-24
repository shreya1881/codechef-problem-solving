#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int b=0;
	while(t--){
	  int a,b,count;
cin>>a>>b;

count=b/a;

if(count*a<b){
cout<<count<<endl;
}
else{
cout<<count-1<<endl;
}
	}
	return 0;
}