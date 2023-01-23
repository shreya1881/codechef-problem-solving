#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

int t;
cin>>t;

while(t>0){

int n,sum=0,num=0;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i = 0; i < n; i++)
{
sum=sum + arr[i];
}

if(num+sum==0){
cout<<0<<endl;    
}
else if((sum)%2==0){
cout<<abs(sum)/2<<endl;;    
}
else{
cout<<-1<<endl;   
}
t--;
}
return 0;
}