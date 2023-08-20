#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    //constructor
    Node(int data)
    {
        this->data=data ;
        this->prev=NULL;
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
void insertathead(Node* &head,int d)
{
    if(head==NULL)
    {
            Node* temp=new Node(d);
            head=temp;
    }
    else{
            Node* temp=new Node(d);
            temp->next=head;
            head->prev=temp;
            head=temp;
    }
    
}
void insertattail(Node* &tail,int d)
{
    if(tail==NULL)
    {
            Node* temp=new Node(d);
            tail=temp;
    }
    else
    {
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
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
    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
}
void deletetheNode(int position,Node* &head)
{
    if(position==1)
    {
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node*curr=head;
        Node*pre=NULL;
        int c=1;
        while(c < position)
        {
            pre=curr;
            curr=curr->next;
            c++;
        }
        curr->prev=NULL;
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"x"<<endl;
} 
int getLength(Node* &head)
{
    Node *temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }cout<<endl;
    return l;
}
int main()
{
    system("cls");
    Node *node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<getLength(head)<<endl;
    insertathead(head,11);
    print(head);
    insertathead(head,13);
    print(head);
    insertattail(tail,23);
    print(head);
    insertatPostion(head,tail,2,100);
    print(head);
    insertatPostion(head,tail,1,101);
    print(head);
    insertatPostion(head,tail,7,102);
    print(head);
    deletetheNode(1,head);
    print(head);
    deletetheNode(4,head);
    print(head);
    deletetheNode(5,head);
    print(head);
}