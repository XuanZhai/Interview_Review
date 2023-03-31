//
// Created by Xuan Zhai on 2023/3/16.
//
#include "Questions.h"

using namespace std;

void StartFastPow(){
    int base = 9;
    int power = 11;

    long long int ans = FastPow(base, power);
    cout << ans << endl;
}


long long int FastPow(int base,int power){
    long long int ans = 1;

    while(power > 0){
        if(power % 2 == 1){
            ans *= base;
        }
        power /= 2;
        base *= base;
    }
    return ans;
}

