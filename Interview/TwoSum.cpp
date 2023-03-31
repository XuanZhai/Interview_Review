//
// Created by Xuan Zhai on 2023/3/16.
//
#include "Questions.h"

using namespace std;

void StartTwoSum(){
    vector<int> nums{120,-1,2,7,11,15};
    int target = 9;

    vector<int> ans = TwoSum(nums,target);

    for(int i : ans){cout << i << ","; }
    cout << endl;
}


std::vector<int> TwoSum(std::vector<int>& nums, int target){
    std::vector<int> ans;
    std::unordered_map<int,int> numDict;

    for(int i = 0; i < nums.size(); i++){
        if(numDict.find(target-nums[i]) != numDict.end()){
            ans.push_back(i);
            ans.push_back(numDict[target - nums[i]]);
            return ans;
        }
        else{
            numDict.insert(std::make_pair(nums[i], i));
        }
    }
    exit(1);
}
