#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
template <class T>
struct Node{
    T info;
	Node* next;
	Node* prev;

    Node (T val  , Node* prv = NULL , Node* nxt = NULL){
        prev = prv;
        next = nxt;
        info = val;
    }
};

template <class T>
class Queue
{
    Node<T> *End , *Front;
    int size;

public:
     Queue();
     Queue(T value, int intial_size);
    ~Queue();
    T& front();
    void pop(); /// removes the first element.
    void push(T value);///adds an element to the back of the queue.
    int Size(); ///returns the number of elements in the queue.
    void print();
};

#endif // QUEUE_H
