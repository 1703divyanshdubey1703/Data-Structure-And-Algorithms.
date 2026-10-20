class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> freq;
        for(auto x: s){
            freq[x]++;
        }
        char string;
        for(auto x: t){
            if(freq[x]==0){
                string=x;
            }
            freq[x]--;
        }

        return string;
    }
};