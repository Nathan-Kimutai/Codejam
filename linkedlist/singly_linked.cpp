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
    struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode*));
    //insert the new_data to the new_node
    new_node->val = new_data;
    new_node->next = head;
    head = new_node;
}

void traverse(ListNode* head)
{
    while(head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{
    cout << "Linked list in c++"<< endl;
    //lets read in input to add to the node
    //int n 
    //the input will be in the format 1 2 3 4 5
    cout << "Enter the data to insert " << endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int v;
        cin>>v;
        insert(v);
    }
    cout << "printing the values now " << endl;
    traverse(head);
}

