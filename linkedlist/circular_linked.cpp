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
  struct ListNode *link = (struct ListNode*) malloc(sizeof(struct ListNode*));
  link->data = new_data;
  link->next = NULL;
  if(head == NULL)
  {
    head = link;
    head->next = link;
  }
  current = head;
  
  while(current->next != head)
  {
    current = current->next;
  }
  link->next = head;
}

//insert letters to the circular circular linked_list
void setUp()
{
  for(int a=97; a<123; a++)
  {
    char r = (char) a;
    //cout << "inserting data" << endl;
    insert(r);
  }
}

int main()
{
  setUp();
  struct ListNode* ptr = head; 
  cout << ptr->next->next->next->data;
  while(ptr->next != head)
  {
    cout << ptr->data;
    ptr = ptr->next;
  }
  cout << ptr->data << "=>";
  cout << "[HEAD]" << endl;
}

