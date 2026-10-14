class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
            return false;

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(auto x: s){
            mp1[x]++;
        }

        for(auto x: t){
            mp2[x]++;
        }

        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(mp2[c]!=mp1[c])
            return false;
            }

            return true;
        }  
};