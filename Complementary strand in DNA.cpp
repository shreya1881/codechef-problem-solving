#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t>0){
	    
int n1;
cin>>n1;
	 
char arr[n1];

for(int i=0;i<n1;i++){
cin>>arr[i];
}
for(int i=0;i<n1;i++){

if(arr[i]== 'A'){
arr[i]='T';
cout<<arr[i];
}

else if(arr[i]== 'T'){
arr[i]='A';
cout<<arr[i];
}
else if(arr[i]== 'C'){
arr[i]='G';
cout<<arr[i];
}
else if(arr[i]== 'G'){
arr[i]='C';
cout<<arr[i];
}


}	 

cout<<endl;
	    
t--;
}
return 0;
}