class Solution {
public:
    int maximumLength(string s) {
        int n=s.length();

        map<string,int>mp;  // substring=>freq
        for(int i=0;i<n;i++){ //O(N)
            string curr;
            for(int j=i;j<n;j++){  //O(N)
                if(curr.empty() || curr.back()==s[j]){
                    curr.push_back(s[j]);
                    mp[curr]++;   // O(N) as current string ke map e copy korchi so worst case e string r len = n so O(N)
                }else{
                    break;
                }
            }
        }

        int result =0;
        for(auto &it : mp){
            string str = it.first;
            int freq = it.second;
            if(freq>=3 && str.length()>result){
                result = str.length();
            }

        }

        return result ==0?-1:result;




        

        
    }
};