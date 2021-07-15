class Solution {
public:
    string customSortString(string order, string str) {

        string s1
        string s2;
        int a[26]={0};

        for(int i=0;i<order.size();i++)
        {
            a[order[i]-'a']++;
        }
        for(int i=0;i<str.size();i++)
        {
            if(a[str[i]-'a']==0) s2+=a[str[i]];
            else a[str[i]-'a']++;
        }
        for(int i=0;i<order.size();i++)
        {
            while(a[order[i]-'a']>1){
                s1+=order[i];
                a[order[i]-'a']--;
            }
        }
        return s1+s2;
    }
};
