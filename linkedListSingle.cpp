#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *next ;
};


/*Print the data*/

void printList(Node *n){
     while (n!=NULL)
     {
        /* code */
        cout<<n->data <<" ";
        n = n->next;
     }
     
}

int main(int argc, char const *argv[])
{
    
    Node *head =NULL; /* Creating Node */
    Node *second = NULL; 
    Node *third = NULL;

    /*Memeory allocation to the node */
    head = new Node();
    second  = new Node();
    third  = new Node();

    /*Init the data */

    head->data = 1;
    head->next = second;


    second->data = 2;
    second->next = third;



    third->data  = 3;
    third->next = NULL;


   printList(head);

    return 0;
}
