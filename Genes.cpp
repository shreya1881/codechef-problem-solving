#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a,b;
	cin>>a>>b;
	if((a=='R' && b=='B') || (b=='R' && a=='B'))
	cout<<"R";
	else if(a=='B' && b=='B') cout<<"B";
	else if(a=='R' && b=='R') cout<<"R";
	else if(a=='G' && b=='G') cout<<"G";
	else if((a=='G' && b=='B') || (a=='B' && b=='G')) cout<<"B";
	else if((a=='R' && b=='G') || (a=='G' && b=='R')) cout<<"R";
	return 0;
}
