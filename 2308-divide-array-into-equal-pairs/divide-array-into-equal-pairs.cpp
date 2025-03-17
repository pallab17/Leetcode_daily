class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &p : nums){
            mp[p]++;
        }
        for(auto &it:mp){
            if(it.second % 2 != 0){
                return false;

            }
        }
        return true;
    }
};