class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int cur = 1;
        int res = 1;
        int ans = nums[0];

        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i - 1]) {
                cur++;
            } else {
                cur = 1;
            }

            if(cur > res) {
                res = cur;
                ans = nums[i];
            }
        }

        return ans;
    }
};