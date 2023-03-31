//
// Created by Xuan Zhai on 2023/3/17.
//
#include "Questions.h"

using namespace std;

void StartLongestPalindrome(){
    string s("bababad");

    cout << "Longest Palindrome is " << LongestPalindrome(s) << endl;
}


std::string LongestPalindrome(std::string s){
    vector<vector<bool>> pMap(s.length(), vector<bool>(s.length(), false));
    int max_l = 0;                          // 2 by 2 map check if l-r is a palindrome.
    int max_len = 0;

    for(int r = 0; r < s.length(); r++){
        for(int l = r; l >= 0; l--){                // Loop through each substring.
            if(l == r) { pMap[l][r] = true; }             // If one char.
            else if(l+1 == r){                          // If two chars.
                if(s[l] == s[r]) { pMap[l][r] = true; }
                else{ pMap[l][r] = false; }
            }
            else{
                pMap[l][r] = (pMap[l+1][r-1]) && (s[l] == s[r]);    // mid and two bounds.
            }

            if(pMap[l][r] && max_len < r-l+1){          // Update the longest.
                max_l = l;
                max_len = r-l+1;
            }
        }
    }
    return s.substr(max_l,max_len);
}

