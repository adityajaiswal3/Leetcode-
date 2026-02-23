class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int prev1 = 0;
        int prev2 = 0;
        int curr = nums[0];
        for(int x : nums) {
            curr = max(prev1, prev2 + x);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};