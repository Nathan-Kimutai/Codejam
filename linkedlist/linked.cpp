#include <bits/stdc++.h>
using namespace std;

//use structs to represent ListNodes
struct ListNode {
    int val; 
    struct ListNode *next;
};

//head node
struct ListNode* head = NULL;

//function to insert a node to head of a linked list
void insert(int new_data)
{
    cout << "inserting new data " << endl;
    struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode*));
    //insert the new_data to the new_node
    new_node->val = new_data;
    new_node->next = head;
    head = new_node;
}

int main()
{
    //lets read in input to add to the node
    //int n 
    //the input will be in the format 1 2 3 4 5
    int n;
    for(int i=0; i<n; i++)
    {
        int v;
        cin>>v;
        insert(v);
    }
    cout << "Linked list in c++"<< endl;
}

