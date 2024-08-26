#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int data;
Node *left;
Node *right;
Node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}
void Preorder(Node* root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
   cout<<endl;
}
void Inorder(Node *root)
{
    if(root==NULL)
    return ;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    cout<<endl;
}
void Postorder(Node *root)
{
    if(root==NULL)
    return ;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
    cout<<endl;
}
};
void LevelOrder(Node *root) 
{
    if(root==NULL)
    {
    return ;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int nodesAtcurrentlevel=q.size();
        while(nodesAtcurrentlevel--)
        {
            Node *curr_Node=q.front();
            q.pop();
            if(curr_Node->left!=NULL)
            {
            q.push(curr_Node->left);
            }
             if(curr_Node->right!=NULL)
            {
            q.push(curr_Node->right);
            }
            cout<<curr_Node->data<<" ";
        }

        cout<<endl;
    }
}

//max depth
int maxDepth(Node *root)
{
    
    if(root==NULL)
    return 0;
   int leftDepth=maxDepth(root->left);
   int rightDepth=maxDepth(root->right);
   return max(leftDepth,rightDepth)+1;
}
//leaf node calculation
void leaf(Node *root,int &sum)
{
    if(root==NULL)
    {
        return ;
    }
 if(root->right==NULL && root->left==NULL)
 {
    sum=sum+1;
 }
 leaf(root->left,sum);
 leaf(root->right,sum);

}
//right view binary tree
vector<int> rightViewBinaryTree(Node *root)
{
vector<int>ans;
if(root == NULL){return ans;}
queue<Node *>q;
q.push(root);
while(!q.empty())
{
    int curr_size=q.size();
    while(curr_size)
    {
    Node*curr_Node=q.front();
    q.pop();
        if(curr_size==1)
        ans.push_back(curr_Node->data);
        if(curr_Node->left!=NULL)
        q.push(curr_Node->left);
        if(curr_Node->right!=NULL)
        q.push(curr_Node->right );
        curr_size--;
    }
}
return ans;
}
vector<int> elementFromTop(Node *root)
{
 vector<int>ans;
 if(root==NULL)
 return ans;
 queue<pair<Node *,int>>q;
 q.push(make_pair(root,0));
 map<int,int>m;
 while(!q.empty())
 {
    int nodesAtCurrentLevel=q.size();
    while(nodesAtCurrentLevel--)
    {
        pair<Node *,int>p=q.front();
        Node *curr_node=p.first;
        int curr_col=p.second;
        q.pop();
       if(m.find(curr_col)==m.end()){
        m[curr_col]=curr_node->data;
       }
       if(curr_node->left)
       {
        q.push(make_pair(curr_node->left,curr_col-1));
       }
       if(curr_node->right)
       {
        q.push(make_pair(curr_node->right,curr_col+1));
       }

    }

 }
    for(auto it:m)
    {
       ans.push_back(it.second);
    }
}
void ReverseLevelOrder(Node *root) 
{
    if(root==NULL)
    {
    return ;
    }
     queue<Node*>q;
    stack<Node*> s;
    q.push(root);
    while(!q.empty())
    {
        int nodesAtcurrentlevel=q.size();
        while(nodesAtcurrentlevel--)
        {
            Node *curr_Node=q.front();
            q.pop();
            s.push(curr_Node);
             if(curr_Node->right!=NULL)
            {
            q.push(curr_Node->right);
            }
            if(curr_Node->left!=NULL)
            {
            q.push(curr_Node->left);
            }
          
        }

       
    }
    while(!s.empty())
    {
        cout<<s.top()->data<<" ";
        s.pop();
    }
}

int main()
{
Node *root =new Node(2); 
root->left = new Node(4);  
root->right = new Node(10);
root->left->left = new Node(6);
root->left->right= new Node(5);
root->right->right=new Node(11);
cout << "Preorder traversal of binary tree is \n";
// root->Preorder(root);
// root->Inorder(root);
// root->Postorder(root);
LevelOrder(root);
cout<<maxDepth(root)<<endl;
int sum=0;
leaf(root,sum);
cout<<sum<<endl;
vector<int>v=rightViewBinaryTree(root);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
vector<int>ans=elementFromTop(root);
int i=0;
while(i<ans.size())
{
    cout<<ans[i]<<" ";
    i++;
}
ReverseLevelOrder(root);


}
