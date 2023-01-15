#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int temp = x/y;
		int temp2 = x%y;
		cout<<" "<<temp+temp2<<endl;
	}
}