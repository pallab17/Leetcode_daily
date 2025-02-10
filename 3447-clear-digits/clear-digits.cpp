class Solution {
public:
    string clearDigits(string s) {
        
        stack<int>st;

        for(char &ch:s){
            if(isdigit(ch)){
                if(st.empty()==NULL){
                    st.pop();
                }
            }else{
                st.push(ch);
            }
        }

        string result ="";
        while(st.empty()==NULL){
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(),result.end());

        return result;
    }
};