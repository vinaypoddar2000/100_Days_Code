//Back-end complete function Template for C++
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