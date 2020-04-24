///#ifndef MYSTACK_H
///#define MYSTACK_H
///#include "MyStack.cpp"
#pragma once

template <class T>
class MyStack
{

private:
    struct Node
    {
        T data;
        Node* next;
    };
    Node* head = nullptr;

public:
    MyStack();


    void print();
    T pop();
    void push(T);
    T peek();


    ///rule of three
    ~MyStack();
    MyStack(const MyStack&);
    MyStack operator=(const MyStack&);


};
#include "MyStack.cpp"
///#endif // MYSTACK_H
