#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    int count=0;
	    for(int i=0; i<N; i++)
	    cin>>arr[i];
	    for(int i=0; i<N; i++)
	    {
	        if(arr[i]>=1000)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}