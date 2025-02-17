class Solution {
public:


   void solve(string &tiles, string &curr,vector<bool>&used, unordered_set<string>&ans,int &n){
    ans.insert(curr);

    for(int i=0;i<n;i++){
        if(used[i]!=false){
            continue;
        }
// use
        used[i]=true;
        curr.push_back(tiles[i]);
// explore
           solve(tiles,curr,used,ans,n);
// undo
           used[i]=false;
           curr.pop_back();

    }
   }




    int numTilePossibilities(string tiles) {
        int n = tiles.length();

        vector<bool>used(n,false);
        unordered_set<string>ans;
        string curr="";

        solve(tiles,curr,used,ans,n);

        return ans.size()-1;

    }
};