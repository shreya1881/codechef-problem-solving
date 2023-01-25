#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     string a , temp=" ";
	    cin>>a;
	    for(int i=0;i<a.length();i=i+2){
	        if(a[i]=='0' && a[i+1]=='0'){
	            temp=temp+'A';
	        }
	        else  if(a[i]=='0' && a[i+1]=='1'){
	            temp=temp+'T';
	        }
	        else  if(a[i]=='1' && a[i+1]=='0'){
	            temp=temp+'C';
	        }
	        else{
	            temp=temp+'G';
	        }
	    }
	    cout<<temp<<endl;
	}
	return 0;
}