#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node *next;
};


void printList(Node *n){
      while (n!=NULL)
      {
        cout<<n->data<<" ";
        n = n->next;
        /* code */
      }
     cout<<"\n";
}

void push(Node **head_ref,int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *(head_ref);
    *(head_ref) = new_node;
}

void insert(Node *_ref,int data){
    if(_ref==NULL){
        cout<<"Previous Node can not be NULL";
        return ;
    }
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = _ref->next;
    _ref->next = new_node;
}

void append(Node **head_ref,int data){
    //1. allocate node
    Node *new_node = new Node();

    // used in step 5
    Node *last = *head_ref;

    new_node->data = data;
    if(*head_ref==NULL){
        *head_ref = new_node;
        return;
    }
    while (last->next!=NULL)
    {   last = last->next;
        /* code */
    }
    last->next = new_node;
    new_node->next = NULL;
    return ;
    
}
int main(int argc, char const *argv[])
{
    /* code */

    Node *head = NULL;
    head = new Node();

    Node *second = NULL;

    second = new Node();

    head->data = 1;
    head->next = second;
    second->data = 3;
    second->next = NULL;
    printList(head);
    push(&head,34);
    printList(head);

    insert(head->next->next,50);
    printList(head);
    append(&head,100);
    append(&head,200);
    printList(head);
    return 0;
}

