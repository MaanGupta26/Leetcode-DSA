class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.length(); i += 2 * k) {
            // Reverse the first k characters of the current 2k block.
            // min() handles the case where less than k characters remain.
            reverse(s.begin() + i, s.begin() + min((int)s.length(), i + k));
        }
        return s;
    }
};