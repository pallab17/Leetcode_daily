class Solution {
public:
    int getLucky(string s, int k) {

        string p ="";
// convertion korbo eibar
        for(char &ch : s){
            int characterthekeinteger = ch - 'a' + 1;
            // ch - 'a' for ch = a is a - 'a' = 0 but a r character value hocche 1 so addong + 1

            p +=to_string(characterthekeinteger);
            // to_string use korchi as characterthekeinteger theke integer format e number ta ache
        }
        //  convertion done 

        int sum =0;

//  transform operation korchi
        while(k--){
            sum=0;

            for( char &ch : p){
                sum += ch - '0';
                // ch - '0'   character to integer 
            }
            p = to_string(sum);

        }


        return stoi(p);
        // stoi(p)  stoi converts the string into an integer









        
    }
};