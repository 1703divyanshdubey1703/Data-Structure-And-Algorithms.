class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        vector<string> v;
        for(int i=0;i<list1.size();i++){
            mp[list1[i]]=i;
        }
        int minsum = INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(mp.count(list2[i])){
                int sum = mp[list2[i]]+i;
                if(sum<minsum){
                    v.clear();
                    v.push_back(list2[i]);
                    minsum=sum;
                }
                else if(sum==minsum){
                    v.push_back(list2[i]);
                }
                else
                    continue;
            }
        }

        return v;
    }
};