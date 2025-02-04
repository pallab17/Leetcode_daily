class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        // tc - O(N)
        // sc - O(1)

        int n = nums.size();

        int sum = nums[0];
        int maxsum = 0;

        for(int i =1;i<n;i++){
            if(nums[i]>nums[i-1]){
                sum+= nums[i];
                
            }else{
                maxsum=max(maxsum,sum);
                sum = nums[i];    
            }
        }

        return max(sum,maxsum);
        


        
    }
};


// Wrong Answer if the code is tweaked
//  int n = nums.size();

//         int sum = nums[0];
//         int maxsum = 0;

//         for(int i =1;i<n;i++){
//             if(nums[i]>nums[i-1]){
//                 sum+= nums[i];
//                 maxsum=max(maxsum,sum);   
//             }else{
//                
//                 sum = nums[i];    // 1
//             }
//         }

//         
//          return max(sum,maxsum);   1,0 ans =1

// 97 / 104 testcases passed

// Editorial
// Input
// nums =
// [100,10,1]

// Use Testcase
// Output
// 1
// Expected
// 100