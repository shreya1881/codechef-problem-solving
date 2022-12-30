#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int a[4];
    for(int i=0; i<4; i++)
    cin>>a[i];
    int c=0;
    for(int i=0; i<4; i++)
    {
        if(a[i]>=10)
        c++;
    }
    cout<<c;
	return 0;
}s