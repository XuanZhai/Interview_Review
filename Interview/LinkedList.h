//
// Created by Xuan Zhai on 2023/3/27.
//

#ifndef INTERVIEW_LINKEDLIST_H
#define INTERVIEW_LINKEDLIST_H
#include <vector>


class LinkedList {
    public:
        class ListNode{
        public:
            int val;
            ListNode* next;
            ListNode(int nval) {val = nval; next = nullptr;}
        };
        ListNode* head;
        void PrintNode();
        void PrintNode(ListNode*);
        void MakeList(std::vector<int>&);
        void HeadTailList(LinkedList);
};


#endif //INTERVIEW_LINKEDLIST_H
