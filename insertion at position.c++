#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *left;
	node *right;

};
node *newnode;
node *start=NULL;
node *temp;
node* createnode()
{

	newnode=new node();
	cin>>newnode->data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
node* insert(root,key)
{
    node *root;
	int key;
    if(root==NULL)
    {
        root=createnode();
    }
        else
        {
            if(key<root->data)
            {
                root->left=insert(root->left,key);

            }
            else{
                root->rigt=insert(root->right,key);
            }
        }
        return root;
}

