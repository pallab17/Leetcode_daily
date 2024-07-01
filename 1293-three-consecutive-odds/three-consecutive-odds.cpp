class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
         //int p = arr.size();
          if (arr.size() < 3) {
            // If the size of the array is less than 3, we cannot have three consecutive odds
            return false;
        }
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i] % 2 == 1 && arr[i+1] % 2 == 1 && arr[i+2] % 2 == 1){
                return true;
            }
        }
        return false;
    }
};

//  int n = arr.size();
        // for(int i = 0; i < n-2; i++) {
        //     if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1) {
        //         return true;
        //     }
        // }

        // return false;