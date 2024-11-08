class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
       int n = nums.size();
       vector<int>result(n);
    //   sob kota element r xor ber korchi - step 1
    int Xor =0;
    for(int i=0;i<n;i++){
        Xor ^= nums[i];
    }
    // k r emun value lagbe jate xor r value maximum hoye tai jonno we need the flipnumber of the xor number - step 2
    // to get the flipped value amader mask korte hobe jiekhane mask no = all bits is set to 1
 //int mask = 2^maximumBit - 1;
 int mask = ((1<<maximumBit) - 1); //ei bhabeo lekha jaye      
            for(int i=0;i<n;i++){
                int k =Xor ^ mask; // k = flipped value of xor i.e. my best k
                result[i]=k;
                // eibar jehetu last element ke array theke ber kore dite hobe so amra jodi oilast element r value r sathe xor kore di taholei technically amader last element got deleted
                Xor = (Xor ^ nums[n-1-i]);
            }
       return result; 
    }
};