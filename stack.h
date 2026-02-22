#include <string>
#include <iostream>
using namespace std;

#ifndef STACK_H
#define STACK_H

class Stack{

    public:
    Stack(); // construct an empty stack of size 1
    ~Stack(); // deletes any dynamically allocated memory

    void push(string value); // insert the new string to the top of the stack
    void pop(); // deletes the string from top. Does nothing if stack is empty

    string top(); // returns the string on top of the stack. Returns empty string "" if stack is empty

    int size(); // returns the number of elements in the stack
    bool empty(); // returns true if stack is empty and false otherwise


    private:
    void expand(); // use this function to double the size of the underlying array

    string* ar;
    int _size;
    int count;
};

#endif