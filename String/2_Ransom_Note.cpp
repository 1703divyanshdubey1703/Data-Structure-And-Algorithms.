class Solution {
public:
    bool canConstruct(string ransomnote, string magazine) {
        vector<int> freq1(26,0), freq2(26,0);
        for(auto c: ransomnote)
            freq1[c-'a']++;
        for(auto c: magazine)
            freq2[c-'a']++;

        for(int i=0;i<ransomnote.length();i++){
            if(freq1[ransomnote[i]-'a']>freq2[ransomnote[i]-'a'])
                return false;
        }

        return true;
    }
};