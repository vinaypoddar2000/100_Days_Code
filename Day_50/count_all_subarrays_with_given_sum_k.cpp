int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int start = 0, end = -1,count = 0,sum = 0;
    int n = arr.size();

    while(start<n){
        while((end+1)<n && (sum+arr[end+1]) <= k){
            sum += arr[end+1];
            end += 1;

        }
        if(sum == k){
            count += 1;
        }

        sum -= arr[start];
        start += 1;

    }
    return count;
}