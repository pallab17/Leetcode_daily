class KthLargest {
public:

// TC - O(Nlog(k)) + O(Mlog(K))
// O(Nlog(k)) for insertion the provided nums into the pq   
// O(Mlog(K))  for add function if total add calls = M 
//  insertion and deletion at heap = O(no of elements ) = O(k)
// return top element at heap = O(1)

int K;
  // min heap nicchi
        priority_queue<int,vector<int>,greater<int>>pq;


    KthLargest(int k, vector<int>& nums) {
        K =k;
      

        // nums r element gulo pq te push korchi
        for(auto &num : nums){     
            pq.push(num);

            // size=k cross korle pop out korbo
            if(pq.size()>k) pq.pop();
            
        }
        
    }
    
    int add(int val) {
        // adding the new element in the pq
        pq.push(val);

          // size=k cross korle pop out korbo
            // if(pq.size()>k) pq.pop();  // now ekhane given k ta accessible na so using global var lets do it
          if(pq.size()>K) pq.pop();   //using the global boro K
        
        // returning the top most element which will be the kth largest element
         return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */