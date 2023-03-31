//
// Created by Xuan Zhai on 2023/3/17.
//
#include "Questions.h"

using namespace std;

void StartClimbStairs(){
    int target = 3;

    cout << "Climb " << target << " stairs has " << ClimbStairs(target) << " ways." << endl;
}


int ClimbStairs(int target){
    if(target == 0) {return 0;}
    else if(target == 1) {return 1;}
    else if(target == 2) {return 2;}

    std::vector<int> steps(target+1, -1);
    steps[0] = 0;
    steps[1] = 1;
    steps[2] = 2;

    for(int i = 3; i < steps.size(); i++){
        steps[i] = steps[i-1] + steps[i-2];
    }
    return steps[target];
}