#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=1;i<n;i++){
            for(int j=i;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;

        Solution ob;
        ob.printTriangle(n);

    }
    return 0;

}