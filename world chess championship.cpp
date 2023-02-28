#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	if(t>=1 && t<=1000) {
	    while(t--) {
	        int x; cin >> x;
	        char arr[14];
	        for(int i=0; i<14; i++)
	        cin >> arr[i];
	        int p1=0, p2=0; int prize=0;
	        for(int i=0; i<14; i++){
	                if(arr[i]=='C') {
	                    p1=p1+2;
	                    p2+=0;
	                } //Carlsen wins
	                if(arr[i]=='N') {
	                    p2=p2+2;
	                    p1+=0;
	                } //Chef wins
	                if(arr[i]=='D') {
	                    p1+=1; p2+=1;
	                }
	            }
	            if(p1>p2) prize=60*x;
	        if(p1<p2) prize=40*x;
	        if(p1==p2) prize=55*x;
	        cout<<prize<<endl;
	    }
	}
	return 0;
}