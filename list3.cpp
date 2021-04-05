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
void insertAtTail(node* &head,int val)
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
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
void deleteAtHead2(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deleteValue(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteAtHead2(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletetheend(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* current=head;
    node* nextptr;
    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=prevptr;
        prevptr=current;
        current=nextptr;
    }
    return prevptr;

}
int main()
{
    node* head=NULL;
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtHead(head,4);
    display(head);
    display(reverse(head));
    
    return 0;

}
