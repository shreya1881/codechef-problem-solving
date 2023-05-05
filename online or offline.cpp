#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	for(int i=1; i<=T; i++){
	    int N,M;
	    cin>>N>>M;
	    //float discount =( N * 10 )/ 100;
	    
	    double costOrder = N - 0.1*N;
	    
	    //float costOrder = N - discount;
	    
	    if(costOrder>M){
	        cout<<"DINING"<<endl;
	    }else if(costOrder<M){
	        cout<<"ONLINE"<<endl;
	    }else{
	        cout<<"EITHER"<<endl;
	    }
	}
	return 0;
}