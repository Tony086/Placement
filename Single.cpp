#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data)
    {
        this->data=data ;
        this->next=NULL;
    }
    //destructor
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            //memory free
            this->next=NULL;
        }
        cout<<"memory is free for this data"<<value<<endl;
    }
};
//function to insert node at head
void insertathead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
//function to insert node at end
void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->next=NULL;
}
//fuction to insert at position
void insertatPostion(Node* &head,Node* &tail,int position,int d)
{
    if(position==1)
    {
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int c=1;
    while(c<position-1)
    {
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    //creation of new node 
    Node* nodetoInsert=new Node(d);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}
void deletetheNode(int position,Node* &head)
{
    if(position==1)
    {
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node*curr=head;
        Node*prev=NULL;
        int c=1;
        while(c < position)
        {
            prev=curr;
            curr=curr->next;
            c++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
//fuction to print
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main()
{
    system("CLS");
    Node *node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertathead(head,12);
    print(head);
    insertattail(tail,13);
    print(head);
    insertatPostion(head,tail,1,15);
    print(head);
    deletetheNode(4,head);
    print(head);
}