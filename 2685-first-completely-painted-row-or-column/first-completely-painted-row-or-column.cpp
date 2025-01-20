class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {

        int noofrows = mat.size();
        int noofcols = mat[0].size();

        unordered_map<int,int>mp;

        for(int i=0;i<arr.size();i++){
            int val = arr[i];
            mp[val]=i;
        }

        int minIndex = INT_MAX;

        // row wise check korchi

        for(int row =0;row<noofrows;row++){
            int lastIndex = INT_MIN;

            for(int col=0;col<noofcols;col++){
                int val = mat[row][col];
                int idx = mp[val];
                lastIndex = max(lastIndex,idx);
            }
            minIndex = min(minIndex,lastIndex);

        }

        // col wise check korchi

        for(int col=0;col<noofcols;col++){
            int lastIndex = INT_MIN;

            for(int row =0;row<noofrows;row++){
                int val= mat[row][col];
                int idx = mp[val];
                lastIndex=max(lastIndex,idx);
            }
            minIndex = min(minIndex,lastIndex);
        }
        
        return minIndex;
    }
};