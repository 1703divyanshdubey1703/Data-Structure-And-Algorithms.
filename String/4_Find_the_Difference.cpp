class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq1(26,0), freq2(26,0);

        for(auto x: s)
            freq1[x-'a']++;
        for(auto x: t)
            freq2[x-'a']++;

        for(int i=0;i<t.length();i++){
            if(freq1[t[i]-'a']==0 || freq1[t[i]-'a']<freq2[t[i]-'a'])
                  return t[i];
        }

        return ' ';
    }
};