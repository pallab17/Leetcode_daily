class Solution {
public:
    string clearDigits(string s) {

int i = 0;
        while(i<s.length()){
            if(isdigit(s[i])){
                s.erase(i,1);

                if(i-1>=0){
                    s.erase(i-1,1);
                    i--;
                }
            }else 
            {
                i++;
            }


        }

        return s;

        
        // tc - O(N) sc - O(N)
        // stack<int>st;

        // for(char &ch:s){
        //     if(isdigit(ch)){
        //         if(st.empty()==NULL){
        //             st.pop();
        //         }
        //     }else{
        //         st.push(ch);
        //     }
        // }

        // string result ="";
        // while(st.empty()==NULL){
        //     result.push_back(st.top());
        //     st.pop();
        // }

        // reverse(result.begin(),result.end());

        // return result;
    }
};