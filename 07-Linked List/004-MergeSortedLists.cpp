#include<iostream>
#include<string>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// void push_back(Node* head, int val)
// {
//     cout<<"Making new node"<<endl;
//     Node* newNode = new Node();
//     newNode->data=val;
//     // newNode->next=NULL;
//     // if(head==NULL)
//     // {
//     //     head = newNode;
//     //     return;
//     // }
//     // else
//     // {
//     // }
//     while(head->next!=NULL)
//     {
//         head=head->next;
//     }
//     head->next=newNode;
//     cout<<"New node created"<<endl;
//     return;
// }

void printLL(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* mergeList(Node* h1, Node* h2)
{
    if(h1==NULL || h2==NULL)
    {
        if(h1==NULL)
            return h2;
        else
            return h1;
    }
    if(h1->data <= h2->data)
    {
        h1->next=mergeList(h1->next, h2);
        return h1;
    }
    else
    {
        h2->next=mergeList(h1, h2->next);
        return h2;
    }
}

int main()
{
 
    Node *l1=new Node(1);
    Node *l2=new Node(2);
    Node *l3=new Node(3);
    Node *l4=new Node(4);
    Node *l5=new Node(5);
    Node *l6=new Node(6);

    l1->next=l3;
    l3->next=l5;

    l2->next=l4;
    l4->next=l6;

    cout<<"List1: ";
    printLL(l1);
    cout<<"List2: ";
    printLL(l2);

    mergeList(l1, l2);
    cout<<"New List: ";
    printLL(l1);

    return 0;
}