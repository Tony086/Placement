#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
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
void insertNode(Node* &tail,int element,int d)
{
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        Node* curr=tail;
        while(curr->data != element)
        {
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* &tail)
{
    Node* temp=tail;
    do{
        cout<<tail->data<<"->";
        tail=tail->next;
    }while(tail != temp);
    cout<<"x"<<endl;
}
void deleteNode(Node* &tail,int value)
{
    Node* prev=tail;
    Node* curr=tail->next;
    while(curr->data!=value)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==prev)
    {
        tail==NULL;
    }
    else if(tail==curr)
    {
        tail=prev;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main()
{
    system("cls");
    // Node *node1=new Node(10);
    Node* tail=NULL;
    insertNode(tail,10,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,6,7);
    print(tail);
    deleteNode(tail,3);
    print(tail);
}