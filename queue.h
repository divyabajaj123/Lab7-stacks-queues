#include <string>
#include <iostream>
using namespace std;

#ifndef QUEUE_H
#define QUEUE_H

class Queue{

    public:
    Queue(); // construct an empty queue of size 1
    ~Queue(); // deletes any dynamically allocated memory

    void push(string value);  // insert the new string to the back of the queue
    void pop(); // deletes the string from front. Does nothing if stack is empty

    string front(); // returns the string from the front of the queue. Returns empty string "" if queue is empty
    string back(); // returns the string from the back of the queue. Returns empty string "" if queue is empty

    int size(); // returns the number of elements in the queue
    bool empty(); // returns true if queue is empty and false otherwise

    private:
    void expand(); // use this function to double the size of the underlying array

    string* ar;
    int _size;
    int count;
};

#endif