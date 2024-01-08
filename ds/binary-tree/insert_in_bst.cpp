#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
       int val;
       Node* left;
       Node* right;
       Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
       }
};
Node * input_tree()
{
    int val;
    cin >> val;
    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * cp = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * left;
        Node * right;
        if(l == -1) left = NULL;
        else
        {
         left = new Node(l);
        }
        if(r == -1) right = NULL;
        else
        {
            right = new Node(r);
        }
        cp->left = left;
        cp->right = right;

        if(cp->left)
        {
            q.push(cp->left);
        }
        if(cp->right)
        {
            q.push(cp->right);
        }
    }
    return root;
}
void levelOrder(Node * root)
{
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * n = q.front();
        q.pop();

        cout << n->val << " ";

        if(n->left)
        {
            q.push(n->left);
        }
        if(n->right)
        {
            q.push(n->right);
        }
    }
}
void insert(Node * &root,int x)
{
    if(root == NULL) 
    {
        root = new Node(x);
        return;
    }
    if(x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left,x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right,x);
        }
    }
}
int main(){
    Node * tree = input_tree();
    insert(tree,13);
    insert(tree,17);
    insert(tree,23);
    insert(tree,28);
    insert(tree,33);
    levelOrder(tree);
    return 0;
}