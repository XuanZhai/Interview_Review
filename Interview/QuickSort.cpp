//
// Created by Xuan Zhai on 2023/3/16.
//
#include "Questions.h"

using namespace std;


void StartQuickSort(){
    vector<int> nums{55,0,7,5,-1,6,-1,12,-10};

    QuickSort(nums, 0, nums.size()-1);

    for(int i : nums){
        cout << i << ",";
    }
    cout << endl;
}


void QuickSort(std::vector<int>& nums, int l, int r){
    if(l < r) {
        int p = Partition(nums, l, r);
        QuickSort(nums, l, p - 1);
        QuickSort(nums, p + 1, r);
    }
}


int Partition(std::vector<int>& nums, int l, int r){
    int pivot = nums[r];
    int pindex = l;

    for(int i = l; i < r; i++){
        if(nums[i] < pivot){
            swap(nums[i],nums[pindex]);
            pindex++;
        }
    }
    swap(nums[r], nums[pindex]);
    return pindex;
}


