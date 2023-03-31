//
// Created by Xuan Zhai on 2023/3/27.
//
#include "Questions.h"

using namespace std;

void StartList(){
    vector<int> nums{55,0,7,5,-1,6,-1,12,-10};
    vector<int> nums1{1,2,3,4,5,6,7,8,9};
    LinkedList ll;
    LinkedList nn;
    ll.MakeList(nums1);

    ll.PrintNode();
    nn.HeadTailList(ll);
}

