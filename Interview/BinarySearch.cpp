//
// Created by Xuan Zhai on 2023/3/15.
//
#include "Questions.h"

using namespace std;

void StartBinarySearch(){
    vector<int> nums{-1,0,3,5,9,12};
    int target = 5;
    int result = BinarySearch(nums, target);
    cout << "Binary Search for " << target << " is: " << result << endl;
}


int BinarySearch(vector<int>& nums, int target){
    int l = 0;
    int r = nums.size()-1;

    while(l <= r){
        int m = (l + r) / 2;

        if(nums[m] == target){return m;}
        if(nums[m] > target){r = m - 1;}
        else{l = m + 1;}
    }
    return -1;
}
