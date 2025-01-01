class Solution {
public:
    int maxScore(string s) {
        // best approach 
        // tc = O(N) as ektai traversal korchi
        // sc = O(!)

        int n= s.length();

        int zc =0;
        int oc=0;
        int result = INT_MIN;

        for(int i=0;i<=n-2;i++){
            if(s[i]=='1'){
                oc++;
            }else{
                zc++;
            }
            result = max(result,zc-oc);
        }

        if(s[n-1]=='1'){
            oc++;
        }

        return result+oc;
  
        
    }
};