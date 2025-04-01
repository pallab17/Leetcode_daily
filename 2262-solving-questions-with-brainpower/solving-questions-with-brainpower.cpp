class Solution {
public:

    long long pb7(long long i,vector<vector<int>>& questions,int n,vector<long long>&t){
        // base case
        if(i>=n){
            return 0;
        }
        if(t[i]!= -1){
            return t[i];

        }
        long long  nebo = questions[i][0] + pb7(i+questions[i][1]+1,questions,n,t);
        long long nebona = pb7(i+1,questions,n,t);

        return t[i] = max(nebo,nebona);
    }




    long long mostPoints(vector<vector<int>>& questions) {
        long long n =  questions.size();
        vector<long long>t(n+1,-1);

        return pb7(0,questions,n,t);
    }
};

// only recursion use korle 32/54 tc solved
// recursion + memo = dp korle solve hocche puro tai
// tc - O(N)
// sc - o(N)