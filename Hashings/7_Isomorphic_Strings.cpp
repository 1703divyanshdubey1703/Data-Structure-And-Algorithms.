class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> mp2;

        for(int i=0;i<s.length();i++){

            if(mp.count(s[i])){
                if(mp[s[i]]!=t[i]){
                    return false;
                }
            }

            mp[s[i]]=t[i];
        }

        for(int i=0;i<s.length();i++){

            if(mp2.count(t[i])){
                if(mp2[t[i]]!=s[i]){
                    return false;
                }
            }

            mp2[t[i]]=s[i];
        }

        return true;
    }
};