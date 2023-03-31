//
// Created by Xuan Zhai on 2023/3/27.
//

#include "LinkedList.h"
#include <iostream>

using namespace std;


void LinkedList::PrintNode(){
    ListNode* curr = head;

    while(curr != nullptr){
        std::cout << curr->val << ",";
        curr = curr->next;
    }
    std::cout << std::endl;
}


void LinkedList::PrintNode(ListNode* oldhead){
    ListNode* curr = oldhead;

    while(curr != nullptr){
        std::cout << curr->val << ",";
        curr = curr->next;
    }
    std::cout << std::endl;
}


void LinkedList::MakeList(std::vector<int>& nums){
    ListNode* newNode = new ListNode(nums[0]);
    head = newNode;
    ListNode* curr = head;

    for(int i = 1; i < nums.size(); i++){
        ListNode* newNode = new ListNode(nums[i]);
        curr->next = newNode;
        curr = curr->next;
    }
}


 void LinkedList::HeadTailList(LinkedList oldlist){

    if(oldlist.head == nullptr){printf("Empty List");}

    ListNode* newNode = new ListNode(oldlist.head->val);
    head = newNode;
    ListNode* tail = head;
    ListNode* curr = oldlist.head->next;
    int itern = 1;

    while(curr != nullptr){
        ListNode* newNode = new ListNode(curr->val);
        if(itern % 2 ==1){
            tail->next = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
        curr = curr->next;
        itern++;
    }
    PrintNode();
}
