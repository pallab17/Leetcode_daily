class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
int n =nums.size();

vector<int>coppby = nums;

sort(coppby.begin(),coppby.end());

int currgrp = 0;
unordered_map<int,int>numtogrp;
numtogrp[coppby[0]] =currgrp; // sorted array r 1st mal ke grp 0 assign korlam

unordered_map<int,list<int>>grptolist;
grptolist[currgrp].push_back(coppby[0]);  // 0 number grp e 1st sorted array mal ke add korlam


for(int i=1;i<n;i++){
    if(abs(coppby[i]-coppby[i-1])>limit){
        // new grp
        currgrp++;
    }
    // assign curr element to the grp
    numtogrp[coppby[i]] = currgrp;
    grptolist[currgrp].push_back(coppby[i]); 
}

vector<int>result(n);

for(int i =0;i<n;i++){
    int num= nums[i];
    int group = numtogrp[num];
    result[i]=*grptolist[group].begin();
    grptolist[group].pop_front();

}

return result;




    }

};

// result array r size dieni bole ei error ta dilo
// Line 1122: Char 9: runtime error: reference binding to null pointer of type 'int' (stl_vector.h)
// SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior /usr/lib/gcc/x86_64-linux-gnu/14/../../../../include/c++/14/bits/stl_vector.h:1131:9