#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  char data;
  struct ListNode *next;
};

struct ListNode* head = NULL;
struct ListNode* current = NULL;

void insert(char new_data)
{
  //cout << "inserting data" << endl;
  struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode*));
  new_node->data = new_data;
  new_node->next = NULL;
  //if head is empty create a new  list
  if(head==NULL)
  {
    head = new_node;
    head->next = new_node;
  }
  current = head;

  while(current->next != head)
  {
    current = current->next;
  }
  current->next = new_node;
  new_node->next = head;
}

int main()
{
  for(int a=97; a<123; a++)
  {
    char r = (char) a;
    insert(r);
  }
  cout << head->next->next->next->data << endl;
}
