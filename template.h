#ifndef LINKED_LIST_TEMPLATE_H
#define LINKED_LIST_TEMPLATE_H
struct University
{
    string profession;
    int gradeYear;
    bool usabilityOfDiploma;
};

struct Node
{
    University diploma;
    Node* pNext;
};
struct LinkedList {
    void push_front(Node *header , Node *newNode){}
    void push_back(Node *tail, Node *newNode){}
    void get(int n){}
    void pop_front(Node *header){}
    void pop_back(Node *tail){}
    void size(){}
    void print(Node *header){}
private:
    Node *head;
    Node *tail;
    int size = 0;
};

#endif
