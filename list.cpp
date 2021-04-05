#include<iostream>
using namespace::std;
class node{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insert(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(node* &head,int val)
{
    node*n=new node(val);
    n->next=head;
    head=n;
}
bool search(node* head,int val)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    node* head=NULL;
    insert(head,1);
    insert(head,3);
    insert(head,5);
    insertAtHead(head,2);

    display(head);
    cout<<search(head,5);
    return 0;
}