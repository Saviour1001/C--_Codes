#include<bits/stdc++.h>
using namespace::std;


struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
    Tree(int val){
        data = val;
        left= NULL;
        right= NULL;
    }
};
void display(Tree* root)
{
    cout<<root->data<<"\n";
    cout<<"Left "<<root->left->data<<"\n";
    cout<<"Right "<<root->right->data<<"\n";
}
int main()
{
    struct Tree* root = new Tree(1);
    root->left=new Tree(2);
    root->right=new Tree(3);
    display(root);
    return 0;
}