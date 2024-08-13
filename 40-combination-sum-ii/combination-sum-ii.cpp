class Solution {
public:
// tc - O(2^N)
// sc - O(N)
 void solve(int angul,vector<int>& candidates,int target,vector<vector<int>>&res,vector<int>&baksho){
    if(target==0){   // base case 
        res.push_back(baksho);
        return;
    }
    if(target<0){
        return;
    }
    for(int i = angul; i< candidates.size();i++){
        if(i>angul &&  candidates[i]==candidates[i-1]) continue;
        baksho.push_back(candidates[i]);
        solve(i+1,candidates,target-candidates[i],res,baksho);
        baksho.pop_back();
    }
 }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>baksho;
        solve(0,candidates,target,res,baksho);
        return res;   
    }
};