class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=0;
        int totalones=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                totalones++;
            }
        }
        int currentwindowtehowmanyones=0;
        int maxcurrentwindowtehowmanyones=0;
        
        while(j<2*n){
            if(nums[j % n]==1){
                currentwindowtehowmanyones++;
            }
            if(j-i+1>totalones){  // window size bere geche
               
                    currentwindowtehowmanyones-= nums[i % n];
                    i++;
                
            }
            
            j++;
            maxcurrentwindowtehowmanyones=max(maxcurrentwindowtehowmanyones,currentwindowtehowmanyones);
        }
        
        return   totalones - maxcurrentwindowtehowmanyones;
        
    }
};