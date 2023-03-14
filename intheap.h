// intheap.h
// Binary heap tree header file for CS 24 lab
// Diba Mirza, Tianle Yu

// DO NOT CHANGE THIS FILE

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

class Heap
{

public:
    void push(int value); // insert value; //duplicates are allowed
    void pop();           // delete the min element
    int top();
    bool empty();
    std::vector<int> heapify(std::vector<int> &input);
    int parent(int index);
    int leftChild(int index);
    int rightChild(int index);

private:
    std::vector<int> vdata; // store the binary heap tree as a dynamic array
};

#endif