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
        
    }
};