//
// Created by Xuan Zhai on 2023/3/17.
//

#include "Questions.h"

using namespace std;


void StartFibonacci(){
    int target = 30;

    cout << "Fib Result for recursive method is: " << Fibonacci_Rec(target) << endl;
    cout << "Fib Result for iterative method is: " << Fibonacci_Ite(target) << endl;
}


int Fibonacci_Rec(int target){
    if(target == 0){return 0;}
    else if(target == 1){return 1;}
    return Fibonacci_Rec(target-1) + Fibonacci_Rec(target-2);
}


int Fibonacci_Ite(int target){
    std::vector<int> nums(target+1,-1);
    nums[0] = 0;
    nums[1] = 1;
    for(int i = 2; i < nums.size(); i++) {nums[i] = nums[i-1] + nums[i-2];}
    return nums[target];
}