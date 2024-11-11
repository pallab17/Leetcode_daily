class Solution {
public:
bool isPrime[1000];
void sieve(){
    fill(isPrime,isPrime+1000,true); // sob kota no ke prime bolchi
    isPrime[0]= false; // 0 prime noye
    isPrime[1]=false;// 1 prime noye

// 2 r multiple ke non prime mark korche tarpor 3 r tarpor so  on ...
    for(int i =2;i*i<1000;i++){
        if(isPrime[i]==true){
            for(int j=i*i;j<1000;j+=i){
                isPrime[j]=false;
            }

        }
    }

}

    bool primeSubOperation(vector<int>& nums) {

        int n =nums.size();

        sieve();

        for(int i =n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){  // jodi amar current no ta next no r theke small hoye tahole already increasing order e achnee so ignore  
                continue;
            }

            // eibar check korbo kon prime no use kore subtract kora jaye

            for(int p=2;p<nums[i];p++){
                if(isPrime[p]==false){ // eita prime no noye
                    continue; 
                }

                //perfect prime no peyegechi so cuurent no minus prime no kore dekhbo oita jodi next no r theke choto hoye tahole bhalo

                if(nums[i]-p<nums[i+1]){
                    nums[i] -=p;
                    break;
                }

            }
            // sob kichu korlam tao current element boro next element r theke so return false
            if(nums[i]>= nums[i+1]){
                return false;
            }

        }

        return true;


        
    }
};