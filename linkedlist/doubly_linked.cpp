#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    struct ListNode* prev;
    struct ListNode *next;
};

//create the head node as usual like in the singly linked list
struct ListNode* head = NULL;

//insert data function
void insert_data(int new_data)
{
    struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode*));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = head;
    head = new_node;

    //this is the part that make it doubly linked list
    if(head != NULL)
    {
        head->prev = new_node
    }
    head = new_node;
}

void main()
{
    //TODO Implement the above here
    cout << "Doubly linked list" << endl;
}

