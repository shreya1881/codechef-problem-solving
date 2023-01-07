#include <iostream>
using namespace std;

int main() {
 int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        d=b+2*c;
        if(d>=a){
            cout<<"Qualify"<<endl;
            
        }
        else
        cout<<"NotQualify"<<endl;
    }
	return 0;
}