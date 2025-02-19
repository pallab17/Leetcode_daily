class Solution {
public:


// tc - O(2 ^ n *   l) 2^n = no of choices l = length of a single string
// sc -O( 2 ^ n * l)

  void solve(string &curr,vector<string>&result,int n){

    if(curr.length()==n){
        result.push_back(curr);
        return;
    }

    for(char ch = 'a';ch<='c';ch++){
        if(!curr.empty() && curr.back()==ch){
            continue;
        }

        // backtracking template
        // do 
        curr.push_back(ch);

        // explore
        solve(curr,result,n);

        // undo
        curr.pop_back();
    }

  }


    string getHappyString(int n, int k) {
        string curr="";
        vector<string>result;
        solve(curr,result,n);
        if(result.size()<k) return "";

        return result[k-1];
    }
};