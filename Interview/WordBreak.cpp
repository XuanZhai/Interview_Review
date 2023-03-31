//
// Created by Xuan Zhai on 2023/3/17.
//
#include "Questions.h"

using namespace std;


bool WordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.length()+1, false);           // dp[i] means 0-i can do word break.
    unordered_set<string> dict(wordDict.begin(), wordDict.end());

    dp[0] = true;                               // First is an empty string which can do break.
    for(int i = 1; i < dp.size(); i++){         // Loop through the vector. create 0-i
        for(int j = i-1; j >= 0; j--){                     // Find j which is between 0 and i.
            if(dp[j] && dict.count(s.substr(j,i-j))){
                dp[i] = true;                   // If 0-j can do word break and j-i is in the dict, set it true.
            }
        }
    }
    return dp[s.length()];
}

