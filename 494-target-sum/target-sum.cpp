class Solution {
public:
int solve(vector<int>& nums,int target,int index,int currentSum){
    if(index==nums.size()){
        if(currentSum==target){
          return 1;
        }
        else{
        return 0;
    }
}

    int plus = solve(nums,target,index+1,currentSum + nums[index]);
     int minus = solve(nums,target,index+1,currentSum - nums[index]);
     return plus + minus;
}
    int findTargetSumWays(vector<int>& nums, int target) {      
        return solve(nums,target,0,0);
    }
};