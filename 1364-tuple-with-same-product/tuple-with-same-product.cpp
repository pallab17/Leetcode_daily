class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

// tc - O(N*N)
// sc - O(N)  for map 

        int n = nums.size();

        int tuples =0;
        unordered_map<int,int>mp;


        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int p =nums[i] * nums[j];
                mp[p]++;
            }
        }

        for(auto &p : mp){
            int pro = p.first;
            int f = p.second;
// fc2
            tuples += (f * (f-1))/2;
        }

        return tuples * 8;
        
    }
};