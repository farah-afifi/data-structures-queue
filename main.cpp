#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue <int> q;

    q.push(3);
    q.push(5);
    q.push(6);
    q.print();

    q.front() = 50 ;
    cout << q.front()<<endl;
    q.print();

    cout<<q.Size()<<endl;

    q.pop();
    q.pop();
    q.print();

    return 0;
}
