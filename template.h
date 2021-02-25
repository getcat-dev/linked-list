#ifndef LINKED_LIST_TEMPLATE_H
#define LINKED_LIST_TEMPLATE_H

struct Node
{
    struct University
    {
        string profession;
        int gradeYear;
        bool usabilityOfDiploma;
    };
    Node* pNext;
};
struct LinkedList {
    void push_front(){}
    void push_back(){}
    void get(){}
    void pop_front(){}
    void pop_back(){}
    void size(){}
    void print(){}
private:
    Node *head;
    Node *tail;
    int size = 0;
};

#endif
