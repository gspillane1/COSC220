///#include "MyStack.h"
#include <iostream>

using namespace std;

template<class T>
MyStack<T>::MyStack()
{

head = nullptr;
}

template<class T>
MyStack<T>::~MyStack()
{
    for (Node *tmp, *cursor=head; cursor; cursor = tmp)
    {
        tmp = cursor->next;
        delete cursor;
    }
}
///     copy constructor
template<class T>
MyStack<T>::MyStack(const MyStack& other)
{

    Node *cursor = nullptr;

    if(!head)
    {
        cout << "No list found in copy constructor"<<endl;
        return;
    }
    else
    {
        while(cursor)
        {
        this->Node->data = other.Node.data;


            cursor = cursor->next;
        }
    }
}
/**
/// print
template <class T>
void MyStack<T>::print()
{
    Node* cursor = nullptr;

    if (!head)
    {
        return; // means there are no contents in the list
    }
    else
    {
        cursor = head;

        while(cursor)
        {
            std::cout << " | "; cursor->data; cout << endl;
            cursor = cursor ->next;
        }
    }
    cout << endl;
}
**/
///===== push ======
template<class T>
void MyStack<T>::push(T D)
{
    Node* newNode = new Node;
    Node* cursor = nullptr;
    newNode->data = D;

    if(!head)
    {
        head = newNode;
        head->next = nullptr;
        return;
    }
    else
    {
        cursor = head;

        while(cursor)
        {

            if(cursor->next == nullptr)
            {
                cursor->next = newNode;
                newNode->next = nullptr;
            }
            cursor = cursor->next;
        }
    }
}
///===== pop =====
template <class T>
T MyStack<T>::pop()
{
    Node tmp;
    tmp.data;
    Node *cursor = nullptr;
    Node *cur_temp = nullptr;

    if(head)
    {
        cursor = head;

            while(cursor->next)
            {
                if(cursor->next->next == nullptr)
                {
                    tmp.data = cursor->next->data;
                    cur_temp = cursor->next;
                    cursor->next = cur_temp->next;

                    delete cur_temp;
                    return tmp.data;
                }
                cursor = cursor->next;
            }

    }
    return tmp.data;
}
///======= peek =====
template<class T>
T MyStack<T>::peek()
{
    Node* cursor = nullptr;

    if(!head)
    {
        std::cout <<"ERROR, no head: peek" <<std::endl;

    }
    else
    {

        cursor = head;

        while(cursor)
        {
            cursor = cursor->next;

            if(cursor->next == nullptr)
            {

            return cursor->data;

            }
        }
    }
}

/**
template<class T>
T MyStack<T>::operator=(const MyStack& other)
{

    Node *cursor = other.head;


///prevents self assignment
    if(this != &other)
    {


            /// empty out list
        while(cursor)
        {
            this->push(cursor->p);;

        }
    }
    return *this;
}
**/
