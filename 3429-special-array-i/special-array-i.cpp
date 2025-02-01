class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
       //Wrong Answer 803 / 852 testcases passed
        // int n = nums.size();

        // int i=0,j=i+1;

        // while(i<n-2){
        //     if((nums[i]%2) == (nums[j]%2)){
        //         return false;
        //     }
        //     i++;
        //     j++;
        // }

        // return true;
         int n = nums.size();

        int i=0;

        while(i<=n-2){
            if((nums[i]%2) == (nums[i+1]%2)){
                return false;
            }
            i++;
            
        }

        return true;

    }
};