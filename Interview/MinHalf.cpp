//
// Created by Xuan Zhai on 2023/3/18.
//
#include "Questions.h"

using namespace std;


void StartMinHalf(){
    //vector<int> nums{1,2,3,4,5,8};

    //cout << "Difference of half is " << MinHalf(nums) << endl;

    vector<int> nums{1,2,3,4,5};
   cout << "Difference of half is " << AdvMinHalf(nums) << endl;
}


int MinHalf(std::vector<int>& nums){
    int sum = 0;
    for(int i : nums){sum+=i;}
    int ans = sum+1;
    int half = sum/2;

    for(int l = 0; l < nums.size(); l++){
        int ssum = nums[l];                 // Sum in the slider.
        int r = l+1;

        while(ssum < half || r < nums.size()){
            ans = std::min(abs(sum - ssum - ssum), ans);    // If new diff is smaller.
            ssum += nums[r];
            r++;
        }
    }
    return ans;
}


int AdvMinHalf(std::vector<int>& nums){
    int sum = 0;
    for(int i : nums){
        sum += i;
    }

    vector<vector<int>> dp(sum/2+1, vector<int>(nums.size()+1, 0));

    for(int i = 1; i < sum/2+1; i++){
        for(int j = 0; j < nums.size(); j++){
            dp[i][j+1] = dp[i][j];                          // Case that not pick nums[j];

            if(nums[j] <= i && dp[i-nums[j]][j] + nums[j] > dp[i][j]){  // If nums[j] is smaller than the capacity
                dp[i][j+1] = dp[i-nums[j]][j] + nums[j];                // And pick gives a higher value.
            }
        }
    }
    return sum - 2 * dp[sum / 2][nums.size()];
}


