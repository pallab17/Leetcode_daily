class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inccount = 1;
        int deccount  = 1;
        int output = 1;

        for(int i =1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){ // increasing order e ache
            inccount++;
            deccount =1;
            output = max(output,inccount);

            }else if(nums[i]<nums[i-1]){
                // decreasing order e  ache
                deccount++;
                inccount = 1; 
                output = max(output,deccount);

            }else{
                inccount = 1;
                deccount = 1;
            }
        }

        return output;
    }
};