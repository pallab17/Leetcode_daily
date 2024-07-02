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



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(begin(nums2),end(nums2));

        int i = 0;
        int j = 0;

        vector<int>result;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                result.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i]<nums2[j]){
                i++;
            }else{
                j++;
            }
        }

        return result;
    }
};
