class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =0;
        int right =0;
        int n= nums.size();
        int min_length = INT_MAX;
        int sum =0;

        for (int right=0; right<n ; right ++) {
            

                sum = sum + nums[right];

                
                
                while (sum >= target) {
                    
            
                    min_length = min(min_length , right - left +1);
                    sum = sum - nums[left];
                    left++;
                }
            
                
        }
        if (min_length == INT_MAX) {
            return 0;
        }
        return min_length;
    }
};