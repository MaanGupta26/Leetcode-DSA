class Solution {
public:
    void perms(int i, vector<vector<int>>& res, vector<int>& nums) {
        if (i == nums.size()) {
            res.push_back(nums);
            return;
        }
        unordered_set<int> seen;
        for (int j = i; j < nums.size(); j++) {
            if (seen.find(nums[j]) != seen.end()) {
                continue;
            }
            seen.insert(nums[j]);
            
            swap(nums[i], nums[j]);
            perms(i + 1, res, nums);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        perms(0, res, nums);
        return res;
    }
};