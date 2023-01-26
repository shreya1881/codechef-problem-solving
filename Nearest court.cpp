#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t,x,y;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    x=min(a,b);
	    y=max(a,b);
	    int count=0;
	    while(x<y)
	    {
	        x++;
	        y--;
	        count++;
	    }
	    cout << count << endl;
	}
	return 0;
}