class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        for(auto x: nums1){
            mp1[x]++;
        }

        unordered_map<int, int> mp2;
        for(auto x: nums2){
            mp2[x]++;
        }

        vector<int> ans;

        for(auto x: mp1){
            if(mp2.count(x.first)){
                int smallest;
                if(x.second>mp2[x.first]){
                    smallest=mp2[x.first];
                }
                else{
                    smallest=x.second;
                }
                while(smallest){
                    ans.push_back(x.first);
                    smallest--;
                }
            }
        }
        return ans;
    }
};