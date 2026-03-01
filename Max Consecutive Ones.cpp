class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countOne = 0, maxCount = 0;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] == 1) {
                countOne++;
                maxCount = max(countOne, maxCount);
            }else{
                countOne = 0;
            } 
        }
       return maxCount;
    }
};