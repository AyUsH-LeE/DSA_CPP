#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class List
{
    Node* head=NULL;
    Node* tail=NULL;

    public:
    void addNode(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
            return;
        }

        tail->next=newNode;
        tail=newNode;
    }

    void reverseList()
    {
        Node* prev = head;
        Node* current = head->next;
        Node* nextNode = head->next->next;

        if(head==NULL || head->next==NULL)
            return;

        prev->next=NULL;
        while(current!=NULL)
        {
 
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head=prev;


    }
    void printLL()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    List ll;
    ll.addNode(1);
    ll.addNode(2);
    ll.addNode(3);

    ll.addNode(4);
    ll.addNode(5);

    cout<<"Original: ";
    ll.printLL();
    cout<<endl;

    ll.reverseList();
    
    cout<<"Reversed: ";
    ll.printLL();
    cout<<endl;

    return 0;
}