// //Approach-2 (Optimal using Map)
// //T.C : O(n*m), m = number of digits
// //S.C : O(n)
// class Solution {
// public:
//     int getDigitSum(int num) {
//         int sum = 0;

//         while(num > 0) {
//             sum += (num % 10);

//             num /= 10;
//         }

//         return sum;
//     }

//     int maximumSum(vector<int>& nums) {
//         int n = nums.size();
//         int result = -1;

//         unordered_map<int, int> mp;

//         for(int i = 0; i < n; i++) {
//             int digitSum = getDigitSum(nums[i]);

//             if(mp.count(digitSum)) {
//                 result = max(result, nums[i] + mp[digitSum]);
//             }

//             mp[digitSum] = max(mp[digitSum], nums[i]);
//         }

//         return result;
//     }
// };

//Approach-2 (Optimal array as Map of constant size)
//T.C : O(n*m), m = number of digits
//S.C : O(1)
// class Solution {
// public:
//     int getDigitSum(int num) {
//         int sum = 0;

//         while(num > 0) {
//             sum += (num % 10);

//             num /= 10;
//         }

//         return sum;
//     }

//     int maximumSum(vector<int>& nums) {
//         int n = nums.size();
//         int result = -1;

//         int mp[82] = {0};

//         for(int i = 0; i < n; i++) {
//             int digitSum = getDigitSum(nums[i]);

//             if(mp[digitSum] > 0) {
//                 result = max(result, nums[i] + mp[digitSum]);
//             }

//             mp[digitSum] = max(mp[digitSum], nums[i]);
//         }

//         return result;
//     }
// };


class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<pair<int,int>> parr;
        int res = -1;
        for(int i = 0; i < n;i ++){
            int DigitSum = sumOfDigits(nums[i]);
            parr.push_back({DigitSum, nums[i]});
        }

        sort(parr.begin(), parr.end());

        for(int i = 1; i < n; i++){
            if(parr[i].first == parr[i-1].first){
                res = max(res, parr[i].second + parr[i-1].second);
            }
        }
        return res;
    }

    int sumOfDigits(int n){
        int sum = 0;
        while(n > 0){
            sum += (n % 10);
            n = n / 10;
        }

        return sum;
    }
};