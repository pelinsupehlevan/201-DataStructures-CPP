//
// Created by Olcay Taner YILDIZ on 24.04.2023.
//

#ifndef DATASTRUCTURES_CPP_HEAP_H
#define DATASTRUCTURES_CPP_HEAP_H


#include "HeapNode.h"

class Heap {
private:
    HeapNode *array;
    int count;
    int N;
    void swapNode(int index1, int index2);
    void percolateDown(int no);
    void percolateUp(int no);
public:
    explicit Heap(int N);
    ~Heap();
    bool isEmpty() const;
    bool isFull() const;
    HeapNode deleteMax();
    void insert(HeapNode node);
    void update(int k, int newValue);
};


#endif //DATASTRUCTURES_CPP_HEAP_H