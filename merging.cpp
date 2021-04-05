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
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
node* mergeRecursive(node* &head1,node* &head2)
{
    
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* result;
    
    if(head1->data>=head2->data)
    {
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    else
    {
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    return result;
}
int main()
{
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6,8};
    node* array1=NULL;node* array2=NULL;
    for(int i=0;i<4;i++)
    {
        insertAtTail(array1,arr1[i]);
    }
    for(int i=0;i<4;i++)
    {
        insertAtTail(array2,arr2[i]);
    }
    display(array1);
    display(array2);
    node* head=mergeRecursive(array1,array2);
    display(head);
    cout<<"yo";
    return 0;
}