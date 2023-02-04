#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l,b;
	cin>>l;
	cin>>b;
	int area = l*b;
	int peri = 2*(l+b);
	if(area>peri) cout<<"Area\n"<<area;
	else if(peri>area) cout<<"Peri\n"<<peri;
	else cout<<"Eq\n"<<area;
	return 0;
}
