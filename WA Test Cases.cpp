#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
// #include <stdlib.h>
#include <math.h>
using namespace std;


int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int n,ans=0,min=100;
        cin>>n;
        int S[n];
        for (int i = 0; i < n; i++)
        {
            cin>>S[i];
        }
        string v;
        cin>>v;
        
        for (int i = 0; i < n; i++)
        {
            if (v[i]=='0')
            {
                ans=S[i];
                if (ans<min)
                {
                    min=ans;
                }   
            } 
        }
        
        cout<<min<<endl;
         
    }
}

