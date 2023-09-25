class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int d = k%n;
        int temp[n];

        for(int i=n-d;i<n;i++){
            temp[i-(n-d)] = nums[i];
        }
        for(int i=n-d;i>0;i--){
            nums[--n] = nums[n-d-1];
        }
        for(int i = 0;i<d;i++){
            nums[i] = temp[i];
        }
        
        
    }
};