#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void printtriangle(int n){
            for(int i=1;i<=n;i++){
                for(int j=0;j<i;j++){
                    cout<<"*";
                }
                for(int j=1;j<= 2*n - 2*i;j++){
                    cout<<" ";
                }
                for(int j=0;j<i;j++){
                    cout<<"*";
                }
                cout<<endl;
            
            }
            for(int i=1;i<=n-1;i++){
                for(int j=0;j<n-i;j++){
                    cout<<"*";
                }
                for(int j=0;j<2*i;j++){
                    cout<<" ";
                }
                for(int j=0;j<n-i;j++){
                    cout<<"*";
                }
                cout<<endl;
            }   
        }   
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution ob;
        ob.printtriangle(n);
    }
    return 0;
}
