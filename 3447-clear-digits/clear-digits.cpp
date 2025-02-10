class Solution {
public:
    string clearDigits(string s) {

// tc - O(N^2)
// sc - O(1)

// int i = 0;
//         while(i<s.length()){   // tc - O(N)
//             if(isdigit(s[i])){
//                 s.erase(i,1);  // tc - O(N)

//                 if(i-1>=0){
//                     s.erase(i-1,1);
//                     i--;
//                 }
//             }else 
//             {
//                 i++;
//             }


//         }

//         return s;

        
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

// tc =O(n)
// sc - O(N)
//   string result = ""; // using this string as a stack

//   for(char &ch : s){

//     if(isdigit(ch)){
//         if(!result.empty()){
//             result.pop_back();
//         }
//     }else{
//             result.push_back(ch);
//         }
//   }
//   return result;


// 

int i =0;
int j=0;

while(i<s.length()){
    if(isdigit(s[i])){
        j = max(j-1,0);  // to ensure that j is not less than 0
    }else{
        s[j] =s[i];
        j++;
    }
    i++;
}

return s.substr(0,j);   

    }
};