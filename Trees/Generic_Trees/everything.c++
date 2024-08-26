#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    vector<Node*>children;
    Node(char value)
    {
        data=value;
    }
};
void preorder(Node *root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    for(auto s:root->children)
    {
        preorder(s);
    }
    return;
}
void inorder(Node *root)
{
    if(root==NULL)
    return;
  int childNode=root->children.size();
  for(int i=0;i<childNode-1;i++)
  {
  inorder(root->children[i]);
  }
  cout<<root->data<<" ";
  if(childNode>0)
  {
    inorder(root->children[childNode-1]);
  }
}
void postorder(Node *root)
{
    if(root==NULL)
    return ;
    for(auto s:root->children)
    {
        postorder(s);
    }
    cout<<root->data<<" ";
    return;
}
void levelOrderTraversal(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
     int currentSize=q.size();
     while(currentSize--)
     {
     Node *curr_Node=q.front();
     q.pop();
     cout<<curr_Node->data<<" ";
     for(Node *child:curr_Node->children)
     {
      q.push(child);
     }
     }
cout<<endl;
     }

    }

int main()
{
    Node *root=new Node('A');
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));
    root->children[0]->children.push_back(new Node('E'));
     root->children[0]->children.push_back(new Node('F'));
      root->children[2]->children.push_back(new Node('G'));
    cout<<root->data<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}
