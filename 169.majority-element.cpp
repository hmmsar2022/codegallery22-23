/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, maj;
        for(int i=0;i<nums.size();i++) {
            if(count) {
                count+=(nums[i]==maj? 1:-1);
            }
            else {
                maj=nums[i];
                count=1;
            }
        }
        return maj;
    }

};
// @lc code=end

