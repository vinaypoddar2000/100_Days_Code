class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int count = 1;
        for(int i = 0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[count] = nums[i+1];
                count+=1;
            }

        }
        return count;
        
    }
};