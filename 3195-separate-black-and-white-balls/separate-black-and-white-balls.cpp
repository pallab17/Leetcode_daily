class Solution {
public:
    long long minimumSteps(string s) {
        
        int n = s.length();
        
        long long blackballs = 0;
        long long swaps =0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='0'){ // white ball eita so swap it totobar jotoguno black balls ache left e
                swaps+=blackballs;
                
            }else{
                blackballs++;
            }
        }
        
        return swaps;
        
    }
};