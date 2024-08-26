#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        val=data;
        left=NULL;
        right=NULL;

    }
};
class BST
{
    public:
    Node*root;
    BST()
    {
    root=NULL;
    }
};
void insert(Node* &root,int value)
{
Node *newNode= new Node(value); 
if(root==NULL)
{
    root=newNode;

}
else
{
Node *current =root;
while(true)
{
    if(current->val>value)
    {
        
            if(current->left == NULL)
            {
                current->left=newNode;
                return;
            }
            current=current->left;
        }
    
    else
    {
        if(current->val<value)
        {
            if(current->right==NULL)
            {
                current->right=newNode;
                return;
            }
            current=current->right;
        }
    }
}
}
}
Node * insertBST(Node *&root,int value)
{
if(root==NULL)
{
    Node *newNode=new Node(value);
    root=newNode;
    return root;
}
else
{
    if(root->val>value)
    {
        if(root->left!=NULL)
        insertBST(root->left,value);
        else
        {
            Node *newNode=new Node(value);
            root->left=newNode;
        }
    }
    else{
         if(root->right!=NULL)
        insertBST(root->right,value);
        else
        {
            Node *newNode=new Node(value);
            root->right=newNode;
        }
    }
}
}

void inorder(Node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
bool search(Node *root,int value)
{
    if(root==NULL)
    {
    return false;
    }
    else
    {
        
        if(root->val==value)
        {
        return true;
        }
       else  if(root->val > value)
        {
       search(root->left,value);
        }
        else 
        search(root->right,value);

    }
    
}
Node * largestNodeBST(Node *root)
{
    Node *current=root;
    while(current &&current->right!=NULL)
    {
        current=current->right;
    }
    return current;
}
Node * deleteBst(Node *root,int key)
{
if(root==NULL)
return root;
if(root->val<key)
{
    root->right=deleteBst(root->right,key);
}
else if(root->val>key)
{
    root->left=deleteBst(root->left,key);
}
else
{
    //no child node
    if(root->val==key && root->right==NULL && root->left==NULL)
    {
     free(root);
     return NULL;
    }
    //node has one child
    else if(root->right==NULL)
    {
        Node *temp=root->left;
        free(root);
        return temp;
    }
     else if(root->left==NULL)
    {
        Node *temp=root->right;
        free(root);
        return temp;
    }
    //node has two child
    else
    {
    Node *justsmallerNode=largestNodeBST(root->left);
    root->val=justsmallerNode->val;
    root->left=deleteBst(root->left,justsmallerNode->val);
    }
}
return root;
}
//lowest common ancestor
Node *lowestCommonAncestor(Node *root,Node *n1,Node *n2)
{
    if(root->val>n1->val &&root->val>n2->val)
    {
        //lca will be lie in left subtree
        return lowestCommonAncestor(root->left,n1,n2);
    }
    //lca will lie in right subtree
     if(root->val<n1->val&&root->val<n2->val)
    return lowestCommonAncestor(root->right,n1,n2);

    //if root value lies between node 1 and node 2 value or node  1 or node 2 value is equals to root value
    return root;
}
//sorted array to binary search tree
Node * sortedArraytoBST(vector<int>nums,int start,int end)
{
if(start >end)
return NULL;
else
{
    int mid = (start + end)/2;
    Node *root=new Node(nums[mid]);
    //recursive case
   root->left=sortedArraytoBST(nums,start , mid-1 );//recursively creating left subtree
    root->right=sortedArraytoBST(nums,mid+1,end);//recursively creating right subtree
    return root;
}
}

//removing leaf Node
Node *removeLeafNode(Node *root)
{
    if(root->left==NULL && root->right==NULL||root==NULL)
    return NULL;
    //recursive case
    root->left=removeLeafNode(root->left);
    root->right=removeLeafNode(root->right);
    return root;
}
//Identical BST

int main()
{
    BST bt;
    insert(bt.root,3);
    insert(bt.root,5);
    insert(bt.root,2);
    insert(bt.root,4);
    inorder(bt.root);
    cout<<endl;

    insertBST(bt.root,6);
    insertBST(bt.root,1);
    insertBST(bt.root,8);
    insertBST(bt.root,10);
    insertBST(bt.root,7);
    inorder(bt.root);
    cout<<endl;

    bool found =search(bt.root,1);
    cout<<found<<endl;
    bt.root=deleteBst(bt.root,6);
    inorder(bt.root);
    cout<<endl;



}
