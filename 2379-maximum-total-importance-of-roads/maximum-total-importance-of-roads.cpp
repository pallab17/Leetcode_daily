class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
      
      /* 
      Prottek ta city ke random value bosiye dekhlam.
Tarpor duto city r maximum importance ber korlam by adding the values of the two cities jeita I have assigned.
Tarpor sob kota road jeita dewa tader majhe ei mti ber korlam.
Ber kore bujhlam je 
Je city tar indegree/outdegree/degree beshi
Sei city tar value sob theke beshi contribution korche mti r sum e

Tai jonno question ta solve korar jonno :-
Step 1- degree ber kore nilam sob kota city r 
Step 2- sort kore nilam degree array ta
Such that the highest degree gets the highest value 
Step 3 - ekta loop chalalam jekhane mti r modhe degree array r element r sathe value r multiplication koralam 
Mane degree r prothom element ta multiply hobe 1 r sathe 
Value++ in every iteration. We will get out mti.
Returning the mti.
      */
      
        vector<int>degree(n,0);
        
        for(auto &vec : roads){
            int u =vec[0];
            int v =vec[1];
            
            degree[u]++;
            degree[v]++;
        }
        
        sort(degree.begin(),degree.end());
        long long value = 1;
        long long mti = 0;
        
        for(int i=0;i<n;i++){
            mti +=(degree[i]*value);
            value++;
        }
        
        return mti;
    }
};