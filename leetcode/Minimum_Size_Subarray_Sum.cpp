// Leetcode 209.
// keyword = positive (예외상황: [4,2,-1,-3,5,2])
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left_idx=0;
        int size = nums.size();
        int current_sum = 0;
        int answer=size+1;
        for(int idx=0; idx<size; idx++){
            if(current_sum<target)
                current_sum += nums[idx];    
            while(current_sum>=target){
                if(answer > idx-left_idx+1) 
                    answer= idx-left_idx+1;
                current_sum -= nums[left_idx];
                left_idx++;
            }
        }
        if (answer==size+1) answer=0;
        return answer;
    }
};