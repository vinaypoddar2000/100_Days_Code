#include <bits/stdc++.h>
using namespace std;

int calcGCD(int n, int m){
    // Write your code here.
    while(n>0 && m>0){
        if(n>m){
            n=n%m;
        }
        else{
            m=m%n;
        }
    }
    if(n==0)    return m;
    else    return n;
    
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<calcGCD(n,m);
}