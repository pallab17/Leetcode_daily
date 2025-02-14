// tc = O(k)

// class ProductOfNumbers {
// public:
// vector<int>nums;
// int n;

//     ProductOfNumbers() {
//         nums.clear();

//         n=0;
//     }
    
//     void add(int num) {
//         nums.push_back(num);
        
//     }
    
//     int getProduct(int k) {
//         int n = nums.size();
//         int p=1;

//         for(int i=n-k;i<n;i++){
//             p*=nums[i];
//         }

//         return p;
        
//     }
// };

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */


//  follow up approach

class ProductOfNumbers {
public:
vector<int>nums;
int n;

    ProductOfNumbers() {
        nums.clear();

        n=0;
    }
    
    void add(int num) {
        if(num==0){
            nums ={};
            n=0;
        }else{
            if(nums.empty()){
                nums.push_back(num);
            }else{
        nums.push_back(nums[n-1]*num);  //last mal r sathe multiply kore de

            }
            n++;
        }

        
    }
    
    int getProduct(int k) {
       if(k>n){
        return 0;
       }else if(k==n){
        return nums[n-1];
       }

       return nums[n-1]/nums[n-k-1];
        
    }
};
