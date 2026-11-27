class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int i=0;
        while(i<chars.size()){
            char ch=chars[i];
            int count=0;
            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
        chars[idx++]=ch;
        if(count>1){
            string str = to_string(count);
            for (char dig : str){
                chars[idx++]= dig;
            }
        } 
    }
    return idx;
    }
};