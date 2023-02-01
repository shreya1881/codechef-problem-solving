#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char s;
	    cin>>s;
	    if(s=='B' || s=='b') cout<<"Battleship\n";
	    else if(s=='c' || s=='C') cout<<"Cruiser\n";
	    else if(s=='f' || s=='F') cout<<"Frigate\n";
	    else if(s=='D' || s=='d') cout<<"Destroyer\n";
	}
	return 0;
}