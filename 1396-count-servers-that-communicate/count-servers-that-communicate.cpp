class Solution {
public:
    int countServers(vector<vector<int>>& grid) {

        int noofrows = grid.size();
        int noofcols = grid[0].size();

        vector<int>rcs(noofrows,0);
        vector<int>ccs(noofcols,0);
// age theke store kore rakhchi kon row aar col e koto guno server ache
        for(int row =0;row<noofrows;row++){
            for(int col=0;col<noofcols;col++){
                if(grid[row][col]==1){
                    rcs[row]+=1;
                    ccs[col]+=1;
                }
            }
        }

        int output=0;

        for(int row=0;row<noofrows;row++){
            for(int col=0;col<noofcols;col++){
                if(grid[row][col]==1 && (rcs[row]>1 || ccs[col]>1) ){
                    output++;
                }
            }
        }

        return output;


        
    }
};