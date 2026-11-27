class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        
        int uniqueCount = 1;
        int limit = candyType.size() / 2;
        for (int i = 1; i < candyType.size() && uniqueCount < limit; i++) {
            if (candyType[i] != candyType[i - 1]) {
                uniqueCount++;
            }
        }
        return min(uniqueCount, limit);
    }
};