// heap.cpp
// Tianle Yu

#include "intheap.h"
#include <iostream>
using std::cout;

// ------ Implement these functions ------

// Takes in a vector, and turns it into a heap IN PLACE
std::vector<int> heapify(std::vector<int> &input)
{
}

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value)
{
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop()
{
}

// Returns the index of the parent of a node at given index (-1 for root)
int parent(int index)
{
}

// Returns the index of the left child of a node at given index (-1 for node that does not exist)
int leftChild(int index)
{
}

// Returns the index of the right child of a node at given index (-1 for node that does not exist)
int rightChild(int index)
{
}

// ------ Funtions below this line are already implemented correctly ------
// Returns the minimum element in the heap
int Heap::top()
{
    return vdata.at(0);
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty()
{
    return vdata.empty();
}
