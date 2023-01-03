#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	int cu=0,cl=0;
	for(int i=0; i<n; i++){
	    if(a[i]%2==0)
	    cl++;
	    else
	    cu++;
	}
	if(cl>cu) cout<<"READY FOR BATTLE\n";
	else cout<<"NOT READY\n";
	return 0;
}