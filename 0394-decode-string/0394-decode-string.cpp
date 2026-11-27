class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strings;
        string currentString = "";
        int k = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                // Handle multi-digit numbers
                k = k * 10 + (c - '0');
            } else if (c == '[') {
                // Push current state to stacks and reset for the new bracket
                counts.push(k);
                strings.push(currentString);
                k = 0;
                currentString = "";
            } else if (c == ']') {
                // Decode the current bracket and append it to the previous string state
                int currentK = counts.top(); 
                counts.pop();
                
                string prevString = strings.top(); 
                strings.pop();
                
                for (int i = 0; i < currentK; ++i) {
                    prevString += currentString;
                }
                currentString = prevString;
            } else {
                // Normal character, just append to current string
                currentString += c;
            }
        }
        
        return currentString;
    }
};