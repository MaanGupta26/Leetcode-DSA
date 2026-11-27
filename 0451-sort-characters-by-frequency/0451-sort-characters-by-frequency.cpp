class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0};
        for (char c : s) {
            freq[c]++;
        }
        
        // 2. Pair frequencies with their characters so we can sort them
        vector<pair<int, char>> freqList;
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) {
                // Store frequency first, so the default sort uses the number
                freqList.push_back({freq[i], (char)i});
            }
        }
        
        // 3. Sort the vector in descending order based on frequency
        sort(freqList.rbegin(), freqList.rend());
        
        // 4. Build the final sorted string
        string result = "";
        for (auto p : freqList) {
            // p.first is the count, p.second is the character
            result.append(p.first, p.second);
        }
        
        return result;
    }
};