class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
     
   /*brute force - approach 1 - tc -O(N * k) sc -O(1)
         while(k--){
            //find the minimum element in the array with its index
            //multiply it with multiplier
            //NOW store the new number in the exact place of the minimum element
            // last e return the nums array
         }

     APPROACH 2 - using min heap
         amra prootek bar minimum element khujji using O(N) which we can do in O(1) time
         but we also need to store the index of the elements noile amra multiply korar por kon index e dhokate  hobe
         seita bujhbo ki kore

         # define P Pair<int,int>

         pq->priority_queue<P,vector<P>,greater<P>pq;

         for(int i=0;i<n;i++){   --> O(N)
            pq.push({nums[i],i});   --> O(logn)
         } total tc O(Nlogn) sudhu push kortei

         tahole tc - O(Nlogn + klogn) java te eitai hobe tc best case




    


        */

        int  n = nums.size();

        vector<pair<int,int>>vec(n);

        for(int i=0;i<n;i++){
            vec[i]={nums[i],i};
        }

        make_heap(begin(vec),end(vec),greater<>());

        while(k--){
            pop_heap(begin(vec),end(vec),greater<>());
            pair<int,int>temp = vec.back();
            vec.pop_back();
            int number = temp.first;
            int index = temp.second;

            nums[index] = number * multiplier;

            vec.push_back({nums[index],index});
            push_heap(begin(vec),end(vec),greater<>());



        }

        return nums;
    }
};