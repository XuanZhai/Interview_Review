//
// Created by Xuan Zhai on 2023/3/17.
//
#include "Questions.h"

using namespace std;


void StartPermutations(){
    std::vector<int> nums {1,2,3};
    std::vector<std::vector<int>> ans = Permutations(nums);

    for(auto subans : ans){
        cout << "[";
        for(int i : subans){

            cout << i << ",";
        }
        cout << "] , ";
    }
    cout << endl;
}


vector<vector<int>> Permutations(vector<int>& nums){
    vector<vector<int>> ans;
    SubPerm(ans, nums, 0);          // left index starts at 0, refers to the whole array.
    return ans;
}

void SubPerm(vector<vector<int>>& ans, vector<int> nums, int l_index){
    if(l_index == nums.size()){
        ans.push_back(nums);                    // If no more substring, push the result to ans.
    }
    for(int i = l_index; i < nums.size(); i++){     // For each possible substring from l to the end.
        swap(nums[i], nums[l_index]);           // Swap current i with the first item.
        SubPerm(ans,nums,l_index+1);    // Find substring.
        swap(nums[i], nums[l_index]);           // Put it back.
    }
}
