class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();
    

    vector<int>pastgorbor(n, 0);

    pastgorbor[0]=0;

    for(int i=1;i<n;i++){
        if(nums[i]%2 == nums[i-1]%2) {// adjacent nos gulo same type
        pastgorbor[i]=pastgorbor[i-1] + 1;
    }else{
         pastgorbor[i]=pastgorbor[i-1];
    }
}



      vector<bool>answer(m, false);
 int i=0;
    
    for(vector<int>& query : queries){
       
        int start = query[0];
        int end = query[1];

        if(pastgorbor[end]-pastgorbor[start]==0){
            answer[i]=true;
        } else{
             answer[i]=false;
        }
        i++;
    }

    return answer;

    }
};