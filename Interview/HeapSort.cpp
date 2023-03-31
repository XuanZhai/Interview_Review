//
// Created by Xuan Zhai on 2023/3/16.
//
#include "Questions.h"

using namespace std;

void StartHeapSort(){
    vector<int> nums{55,0,7,5,-1,6,-1,12};
    HeapSort(nums);

    for(int i : nums){
        cout << i << ",";
    }
    cout << endl;
}


void Heapify(std::vector<int>& nums, int size, int parent){
    int l_child = parent * 2 + 1;        // Left and Right Children indexes.
    int r_child = parent * 2 + 2;
    int max = parent;

    if(l_child < size && nums[l_child] > nums[max]){
        max = l_child;
    }

    if(r_child < size && nums[r_child] > nums[max]){
        max = r_child;
    }                                   // Find the max index over the three.

    if(max != parent){
        swap(nums[max], nums[parent]);      // Swap the parent and the max.
        Heapify(nums, size, max);       // Heapify that child.
    }
}


void HeapSort(std::vector<int>& nums){
    for(int i = nums.size()/2-1; i >= 0; i--){
        Heapify(nums, nums.size(), i);          // Build the heap.
    }

    for(int i = nums.size()-1; i > 0; i--){
        swap(nums[0], nums[i]);             // Find the max/root each time.
        Heapify(nums, i, 0);            // Move it to the buttom and re-heap.
    }
}
