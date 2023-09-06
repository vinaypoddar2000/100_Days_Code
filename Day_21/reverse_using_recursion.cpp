vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int> reversedArray(n);
    for(int i=0;i<n;i++){
        reversedArray[i]=nums[n-i-1];
    }
    return reversedArray;


}
