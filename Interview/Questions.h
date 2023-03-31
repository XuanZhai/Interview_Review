//
// Created by Xuan Zhai on 2023/3/15.
//

#ifndef INTERVIEW_QUESTIONS_H
#define INTERVIEW_QUESTIONS_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "LinkedList.h"

void StartBinarySearch();
int BinarySearch(std::vector<int>&, int);

void StartQuickSort();
void QuickSort(std::vector<int>&, int, int);
int Partition(std::vector<int>&, int, int);

void StartTwoSum();
std::vector<int> TwoSum(std::vector<int>&, int);

void StartFastPow();
long long int FastPow(int,int);

void StartHeapSort();
void Heapify(std::vector<int>&, int, int);
void HeapSort(std::vector<int>&);

void StartFibonacci();
int Fibonacci_Rec(int);
int Fibonacci_Ite(int);

void StartClimbStairs();
int ClimbStairs(int);

void StartPermutations();
std::vector<std::vector<int>> Permutations(std::vector<int>&);
void SubPerm(std::vector<std::vector<int>>&, std::vector<int>, int);

bool WordBreak(std::string,std::vector<std::string>&);

void StartLongestPalindrome();
std::string LongestPalindrome(std::string);

void StartMinHalf();
int MinHalf(std::vector<int>&);
int AdvMinHalf(std::vector<int>&);

void StartPractice();

int SMinHalf(std::vector<int>&);


void StartList();
void HeadTailList(std::vector<int>&);


#endif //INTERVIEW_QUESTIONS_H
