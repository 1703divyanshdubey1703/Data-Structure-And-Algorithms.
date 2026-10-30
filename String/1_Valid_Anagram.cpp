class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq1(26, 0), freq2(26, 0);
        for(auto c: s)
            freq1[c-'a']++;

        for(auto c: t)
            freq2[c-'a']++;

        for(int i=0;i<t.length();i++){
            if(freq1[t[i]-'a'] != freq2[t[i]-'a'])
                return false;
        }

        for(int i=0;i<s.length();i++){
            if(freq1[s[i]-'a'] != freq2[s[i]-'a'])
                return false;
        }

        return true;
    }
};