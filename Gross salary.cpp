#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float n;
	    cin>>n;
	    float hra,da,gross;
	    if(n<1500){
	    hra = 0.1*(n);
	    da = 0.9*(n);
	    gross = (n)+hra+da;
	    cout<<fixed<<setprecision(2)<<gross<<endl;
	    }
	    else{
	        hra = 500.00;
	        da = 0.98*(n);
	        gross = (n)+hra+da;
	        cout<<fixed<<setprecision(2)<<gross<<endl;
	    }
	}
	return 0;
}