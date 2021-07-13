class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;
        for(int i=0;i<s.size();i++)
        {
            if(m1.find(s[i])==m1.end() and m2.find(t[i])==m2.end())
            {
                m1[s[i]]=t[i];
                m2[t[i]]=s[i];
            }
            else if(m1.find(s[i])==m1.end() or m2.find(t[i])==m2.end())
                return false;
            else
            {
                if(t[i]!=m1[s[i]]) return false;
                if(s[i]!=m2[t[i]]) return false;
            }

        }
        return true;
    }
};
