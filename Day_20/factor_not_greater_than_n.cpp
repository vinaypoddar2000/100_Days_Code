vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    long long res=1,cnt=1;
    vector<long long> ans;
    while(res<=n/cnt){
        res=res*cnt;
        cnt++;
        ans.push_back(res);
    }
    return ans;

}