#ifndef UNTITLED_LINKEDLIST_H
#define UNTITLED_LINKEDLIST_H
#include "DataStruct.h"
using std::cout;
using std::endl;
struct Node
{
    University diploma;
    Node* pNext;
};
struct LinkedList {
    void push_front()
    {
        Node *nextNode = new Node;
        if(head)
        {
            nextNode ->pNext = head;
            head = nextNode;
        }
        else
        {
            head = nextNode;
        }
    }
    void push_back()
    {
        Node* tail = findTail();
        Node *nextNode = new Node;
        if(head == nullptr)
        {
            head = nextNode;
        }
        else
        {
            tail->pNext = nextNode;
        }
    }
    void get(int n)
    {
        Node* tmp = head;
        int element = 0;
        while (tmp != nullptr)
        {
            if(element == n)
            {
                cout<< tmp->diploma.profession <<"\n" << tmp->diploma.gradeYear
                    <<"\n"  << tmp->diploma.usabilityOfDiploma << "\n~~~~" << endl;
            }
            element++;
            tmp = tmp->pNext;
        }
        if(n > element)
        {
            cout<<"Element not found" <<endl;
        }
        delete tmp;
    }
    void pop_front()
    {
        if(head != nullptr)
        {
            cout<< head->diploma.profession <<"\n" << head->diploma.gradeYear<<"\n"
                << head->diploma.usabilityOfDiploma << "\n~~~~" << endl;
            Node* tmp = nullptr;
            tmp = head;
            head = head->pNext;
            delete tmp;
        }
        else
        {
            cout<< "Linked list is underflow " << endl;
        }
    }
    void pop_back()
    {
        Node * tmp = head;
        Node * prevNode = nullptr;
        if(head != nullptr)
        {
            cout<< head->diploma.profession <<"\n" << head->diploma.gradeYear<<"\n"
                << head->diploma.usabilityOfDiploma << "\n~~~~" << endl;
            if(head->pNext)
            {
                while(tmp->pNext)
                {
                    prevNode = tmp;
                    tmp = tmp->pNext;
                }
                if(prevNode->pNext)
                {
                    prevNode->pNext = nullptr;
                }
                delete tmp;
            }
            else
            {
                tmp = head;
                head = head->pNext;
                delete tmp;
            }
        }
        else
        {
            cout<< "Linked list is underflow " << endl;
        }

    }
    void size()
    {
        Node *tmp = head;
        int sizeOfLinkedList = 0;
        if(tmp != nullptr)
        {
            while (tmp)
            {
                sizeOfLinkedList++;
                tmp = tmp->pNext;
            }
            delete tmp;
            cout << sizeOfLinkedList << endl;
        }
        else
        {
            cout<< "Linked list is underflow " << endl;
        }
    }
    void print()
    {
        Node *tmp = head;
        while(tmp)
        {
            cout<< tmp->diploma.profession <<"\n" << tmp->diploma.gradeYear
                <<"\n"  << tmp->diploma.usabilityOfDiploma << "\n~~~~" << endl;
            tmp = tmp->pNext;
        }
        delete tmp;
    }
    Node* findTail( )
    {
        Node* tmp = head;
        if(!tmp)
        {
            return tmp;
        }
        else
        {
            while(tmp->pNext != nullptr)
            {
                tmp = tmp->pNext;
            }
            return tmp;
        }
    }
private:
    Node *head = nullptr;
};
#endif //UNTITLED_LINKEDLIST_H
