class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        //  tc - o(N) sc - O(1)
        int n =arr.size();
        int maxi=-1;
        int count =0;


        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);

            if(maxi==i){
                count++;
            }

        }
        return count;
        
    }
};