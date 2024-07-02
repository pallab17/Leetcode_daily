class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
       unordered_map<int,int>mp;

       for(auto &num : nums1){
        mp[num]++;
       }


        vector<int>result;

        for(int i=0;i<nums2.size();i++){
            int number = nums2[i];
            if(mp[number]!=0){
                result.push_back(number);
                mp[number]--;
            }
        }

      

        return result;
    }
};