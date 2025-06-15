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

    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
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

    void pop_front()
    {
        if(head==NULL)
            return;
        Node* temp = head;
        head=head->next;
        temp->next = NULL;
        cout<<"Popped item: "<<temp->data<<endl;
        delete temp;

    }

    void pop_back()
    {
        if(head==NULL)
            return;
        Node* temp = head;
        // while(temp->next!=tail)
        while(temp->next->next!=NULL)
            temp=temp->next;

        temp->next=NULL;
        cout<<"Popped Item: "<<tail->data<<endl;
        delete tail;
        tail=temp;

        // temp=temp->next;
        // tail->next=NULL;
        // cout<<"Popped Item: "<<temp->data<<endl;
        // delete temp;
    }

    void insert(int val, int pos)
    {
        if(pos==0 || head==NULL)
        {
            push_front(val);
            return;
        }

        Node* temp = head;
        Node* newNode = new Node(val);
        for(int i=1; i<pos; i++)
        {
            temp=temp->next;
            if(temp->next == NULL)
            {
                cout<<"Position out of bounds. Inserting at the end."<<endl;
                break;
            }
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void pop(int pos)
    {
        if(head==NULL)
        {
            cout<<"List Empty!!";
            return;
        }
        if(pos==0)
        {
            pop_front();
            return;
        }

        Node* temp=head;
        for(int i=1; i<pos; i++)
        {
            temp=temp->next;
            if(temp->next==NULL)
            {
                cout<<"Position out of bounds."<<endl;
                return;
            }                    
        }
        Node* tempDel = temp->next;
        temp->next=tempDel->next;
        cout<<"Popped Item: "<<tempDel->data<<endl;
        delete tempDel;
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
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();

    // ll.pop_front();
    // ll.printLL();

    // ll.pop_back();
    // ll.printLL();

    // ll.insert(7,7);
    // ll.printLL();

    ll.pop(7);
    ll.printLL();

    ll.search(5);

    return 0;

}