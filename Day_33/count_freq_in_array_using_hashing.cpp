vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int> hash(n,0);
    for(int i=0;i<n;i++){
        hash[nums[i] - 1] +=1; 
    }
    
    return hash;
}