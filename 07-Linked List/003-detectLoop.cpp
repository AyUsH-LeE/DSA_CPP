#include<iostream>
#include<string>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node* head;
    Node* tail;
    
    public:
    List()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void search(int val)
    {
        Node* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            if(temp->data==val)
            {
                cout<<"Found at: "<<count<<endl;
                return;
            }
            temp=temp->next;
            count++;
        }

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
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();

    return 0;

}