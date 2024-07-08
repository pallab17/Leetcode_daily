class Solution {
public:
    int findTheWinner(int n, int k) {
//         question e ja boleche otai korchi
        
        vector<int>arr; // creating a array
        
        for(int i =1;i<=n;i++){
            arr.push_back(i); // pushing all the players in the array
        }
        
        int khelasururposition=0; // khela first player suru korbe je first position e bose ache i.e. index=0
        
        while(arr.size()>1){  // tc - O(N)
            int newkhelasururposition = (khelasururposition+k-1)% arr.size();    // ei position e bosa player ta heregeche 
            
            arr.erase(arr.begin()+newkhelasururposition); // ei player ta heregeche tai ber kore dicchi game theke aar erase fn array ke left shift kore  deye mane je player ta ke ber kore dilam tar position e tar porer player ta chole ashe aar array size o kome jaye by 1   Tc - O(N)
            
            khelasururposition = newkhelasururposition; // eibar abar khela suru hobe sei player theke je delete howar por bose chilo but se jehetu delete howar player e position e giye boslo tai je position e last player delete holo sei position thekei new khela start hobe
            
//             Total TC - O(N)  SC - O(1)
            
        }
        
        return arr[0];  // last opdi ektai player pore thakbe winner hobe se so returning that player
    }
};