class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int i = 0, sum = 0, cnt = 0;
        while(i<n && cnt<1){
            for(int j=i+1;j<n;j++){
                sum += nums[i]+nums[j];
                if(sum == target){
                    return {i,j};
                    
                }
                else{
                    sum = 0;
                }
            

            }
            i++;
        }
        return {};
    }
        
    
};