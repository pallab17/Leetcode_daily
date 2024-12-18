class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //using monotonic stack
        int n = prices.size();
        vector<int>result(prices.begin(),prices.end());
        stack<int>st;

        for(int i=0;i<n;i++){


            while(st.empty()==false && prices[i]<=prices[st.top()]){
                result[st.top()]-=prices[i];
                st.pop();
            }
            st.push(i);
        }

        return result;

        // tc - O(2 * N ) as dubar kore prottek ta element visit hocche ekbar traversal r time e ekbar comaparison r time e
        // sc - O(N)  monotonic stack aka normal stack ei  use korar r jonno 
        
    }
};