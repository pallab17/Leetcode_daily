class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        
        long long N = n*n;
        long long givenSquareSum = 0;
        long long givenSum       = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                givenSum        += grid[i][j];
                givenSquareSum  += grid[i][j]*grid[i][j];
            }
        }

        long long squareSum = (N * (N+1) * (2*N+1))/6;
        long long Sum       = (N * (N+1)/2);

        int squareDiff = givenSquareSum - squareSum;
        int sumDiff    = givenSum - Sum;

        int twice   = (squareDiff/sumDiff + sumDiff)/2;
        int missing = (squareDiff/sumDiff - sumDiff)/2;

        return {twice, missing};

    }
};