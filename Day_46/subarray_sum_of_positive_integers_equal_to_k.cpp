int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    int start = 0, end = -1, maxlen = 0;
    long long sum = 0;

    while(start<n){
        while(end+1<n && sum + a[end+1] <= k){
            
            sum +=a[end+1];
            end+=1;
        }
        if(sum == k){
                maxlen = max(maxlen,end-start+1);

            }
        sum -= a[start];
        start+=1;
    }
    return maxlen;

}
