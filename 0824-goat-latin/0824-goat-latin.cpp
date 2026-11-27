class Solution {
public:
    string toGoatLatin(string sentence) {
        string str = "";
        vector<string> vec;
        for(int i = 0; i < sentence.size(); ++i)
        {
            string st = "";
            while(sentence[i] != ' ' && i != sentence.size())
            {
                st += sentence[i];
                i++;
            }
            if(st[0] == 'a' || st[0] == 'e' || st[0] == 'i' || st[0] == 'o' || st[0] == 'u' ||
               st[0] == 'A' || st[0] == 'E' || st[0] == 'I' || st[0] == 'O' || st[0] == 'U')
            {
                st += "ma";
            }
            else
            {
                st += st[0];
                st.erase(0,1);
                st += "ma";
            }
                int n = vec.size() + 1;
                st.append(n,'a');
                vec.push_back(st);
        }
        for(auto & i : vec)
        {
            str += i;
            str += ' ';
        }
        str.pop_back();
        return str;
    }
};