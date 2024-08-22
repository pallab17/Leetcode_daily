//Approach-1 (Using bit magic of XOR)
//T.C : O(log2(num))
//S.C : O(1)
class Solution {
public:
    int findComplement(int num) {
        int number_of_bits = (int)(log2(num)) + 1;
        
        for(int i = 0; i<number_of_bits; i++) {
            num = num^(1<<i); //Take Xor to flip
        }
        return num;
    }
};