//
// Created by Xuan Zhai on 2023/3/25.
//
#include "Questions.h"

using namespace std;


void StartPractice(){
    //vector<int> nums{1,2,3,4,5,8};
    vector<int> nums{1,2,3,4,5};
    cout << "Difference of half is " << SMinHalf(nums) << endl;

    //out << "Difference of half is " << AdvMinHalf(nums) << endl;
}


int SMinHalf(std::vector<int>& nums){
    int sum = 0;
    for(int i : nums){sum += i;}

    vector<vector<int>> dp(sum/2+1, vector<int>(nums.size()+1,0));

    for(int i = 1; i < sum/2+1; i++){
        for(int j = 0; j < nums.size(); j++){
            dp[i][j+1] = dp[i][j];
            if(nums[j] <= i){
                dp[i][j+1] = std::max(dp[i][j], dp[i-nums[j]][j]+nums[j]);
            }
        }
    }

    return sum - 2 * dp[sum/2][nums.size()];

}

