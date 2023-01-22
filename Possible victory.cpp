#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r,o,c;
	cin>>r>>o>>c;
	int rmo = 20-o;
	int score = 36*rmo;
	if(c+score > r) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}