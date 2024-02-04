#include<iostream>
using namespace std;
class bst;
class node{
    node* left,*right;
    int data;
    public:
        node(int data)
        {
            this->data=data;
            left=NULL;
            right=NULL;
        }
        friend class bst;
};
class bst{
    node* root;
    node* append(node* root, int data);
    void inorder(node* root);
    public:
        bst()
        {
            root=NULL;
            root=append(8);
            root=append(3);
            root=append(1);
            root=append(6);
            root=append(4);
            root=append(7);
            root=append(10);
            root=append(14);
            root=append(13);
        }
        node* append(int data);
        void inorder();
};
node* bst::append(int data)
{
    return append(root,da
}
node* bst::append(node* root, int data)
{
    if(root==NULL)
    {
        root=new node(data);
    }
    else
    {   if(root->data>data)
        {
            root->left=append(root->left,data);
        }
        else{
            root->right=append(root->right,data);
        }
    }
    return root;
}
void bst::inorder()
{
   return inorder(root);
}
void bst::inorder(node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }       
}
int main()
{
    bst a;
    a.inorder();
    return 0;
}