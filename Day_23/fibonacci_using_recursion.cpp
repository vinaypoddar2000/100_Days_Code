
vector<int> generateFibonacciNumbers(int n) {

    // Write your code here.
    vector<int> ans(n);
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<n;i++){
        ans[i] = ans[i-1]+ans[i-2];

    }
    return ans;

}
