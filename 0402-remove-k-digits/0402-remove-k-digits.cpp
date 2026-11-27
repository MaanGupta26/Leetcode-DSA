class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
        for (int i = 0; i < num.length(); i++) {
            while (!ans.empty() && k > 0 && ans.back() > num[i]) {
                ans.pop_back();
                k--;
            }
            ans.push_back(num[i]);
        }
        // If k is still greater than 0, remove digits from the end
        while (k > 0 && !ans.empty()) {
            ans.pop_back();
            k--;
        }
        // Remove leading zeros
        int i = 0;
        while (i < ans.length() && ans[i] == '0') {
            i++;
        }
        ans = ans.substr(i);
        // If the string becomes empty, return "0"
        if (ans.empty()) {
            return "0";
        }
        return ans;
    }
};