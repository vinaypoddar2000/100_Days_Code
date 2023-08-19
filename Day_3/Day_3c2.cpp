#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void printsquare(int n){
            for(int i=0;i<2*n - 1;i++){
                for(int j=0;j<2*n - 1;j++){
                    int top=i;
                    int left=j;
                    int right=(2*n - 2)- j;
                    int bottom=(2*n - 2) - i;
                    cout<<(n - min(min(top,bottom),min(right,left)))<<" ";
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
        ob.printsquare(n);
    }
    return 0;
}
