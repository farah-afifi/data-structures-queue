#include "Queue.h"

template <class T>
Queue<T>::Queue(){
    End = NULL;
    Front = NULL;
    size = 0;
}

template <class T>
Queue<T>::Queue(T value, int intial_size)///constructs a queue having ‘initial_size’ elements whose values are ‘value’.
{
    Node<T> *temp =new Node<T>(value ,NULL, End);
    for(int i = 0 ; i < intial_size ; i++){
            if(End == NULL){
                End = temp;
                Front = temp;
            }
            else{
                End->prev = temp;
                End = temp;
            }
            size++;
    }
}

template <class T>
void Queue<T>::push(T value)///adds an element to the back of the queue.
{
    Node<T> *temp =new Node<T>(value , NULL ,End);
    if(End == NULL){
        End = temp;
        Front = temp;
    }
    else{
        End->prev = temp;
        End = temp;
    }
    size++;
}

template <class T>
void Queue<T>::pop() /// removes the first element.
{
    //cout << LL_Queue.getTailValue() <<endl;
    if (size <= 0)
    {
        cout <<"there is nothing to remove!!\n";
        return;
    }

//    Node<T>* tempIter = End ,*prev;
//    while(tempIter->next != NULL){
//        prev = tempIter;
//        tempIter = tempIter->next;
//    }
//
//    delete Front;
//
//    prev->next = 0;
//    Front = prev;
        Node<T>* temp = Front ->prev;
        delete Front;
        Front = temp;
        Front->next =NULL;


    size--;
}

template <class T>
T& Queue<T>:: front() ///returns the first element by reference
{
    return Front->info;
}

template <class T>
int Queue<T>::Size(){
    return size;
}

template <class T>
void Queue<T>::print(){
    Node<T>* cur = End;

    if(size == 0)
    {
        cout <<"";
        return;
    }
    while(cur->next != 0 ){
        cout <<cur->info << " " ;
        cur = cur ->next;
    }
    cout <<cur->info << "\n" ;
}

template <class T>
Queue<T>::~Queue()
{
    Node<T> *cur = End , *temp;
    while(cur ->next != 0){
        temp = cur->next;
        delete cur;
        cur = temp;
    }
    delete cur;
}

template class Queue <int>;
template class Queue <double>;
template class Queue <short>;
template class Queue <float>;
template class Queue <string>;
