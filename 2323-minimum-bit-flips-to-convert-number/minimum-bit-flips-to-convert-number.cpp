//Approach-1 (Bit by Bit check)
//T.C : O(1) , maximum we will have 30 bits(as per constraint) to represent the numbers - O(30) ~ O(1)
//S.C : O(1)
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;

        while(start > 0 || goal > 0) {

            //check right most bit of both if they are equal or not
            if((start & 1) != (goal & 1)) {
                count++;
            }

            //rule out the right most bit
            start = (start >> 1);
            goal  = (goal >> 1);
        }

        return count;
    }
};