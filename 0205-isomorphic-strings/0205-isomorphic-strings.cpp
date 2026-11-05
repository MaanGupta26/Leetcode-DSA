class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int lasts[256]={0};
        int lastt[256]={0};
        for(int i=0;i<s.size();i++){
            if(lasts[s[i]]!=lastt[t[i]]){
                return false;
            }
            lasts[s[i]]=i+1;
            lastt[t[i]]=i+1;
        }
        return true;
    }
};