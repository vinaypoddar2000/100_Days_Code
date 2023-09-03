#include<bits/stdc++.h>
using namespace std;

int recursion(int n){
        if(n<=1){
                return n;

        }
        return recursion(n-1)+recursion(n-2);
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
       int n;
       cin>>n;
       cout<<recursion(n)<<endl;
}