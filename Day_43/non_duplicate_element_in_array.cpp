class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int ans;

        for(int i=0;i<n;i++){
            if(freq[nums[i]]==1){
                ans = nums[i];
            }
        }
        return ans;
        
    }
};