#include <iostream>
using namespace std;

struct node
{
    int id;
    node* left;
    node* right;
};

node* create(int data)
{
    node* newnode = new node();
    newnode->id = data;
    newnode->left = newnode->right = nullptr;
    return newnode;
}

node* insert(node* root, int data)
    {
        if (root == nullptr) {return create(data);}

        if (data < root->id) 
        {
            root->left = insert(root->left,data);
        }

        else if (data > root->id)
        {
            root->right = insert (root->right,data);
        }
        return root;
    }

void inorder(node* root)
{
    if (root != nullptr) {
        inorder(root->left);
        cout << root->id << " ";
        inorder(root->right);
    }
}

void Preorder(node* root)
{
    if (root != nullptr) {
        cout << root->id << " ";
        inorder(root->left);
        inorder(root->right);
    }
}

void Postorder(node* root)
{
    if (root != nullptr){
        inorder(root->left);
        inorder(root->right);
        cout << root->id << " ";
        
    }
}


int main()
{

    node* root = nullptr;

    root = insert(root,10);

    root = insert(root,3);
    root = insert(root,4);
    root = insert(root,6);

    root = insert(root,23);
    root = insert(root,11);
    root = insert(root,51);

    cout << "InOrder: ";
    inorder(root);
    cout << endl;

    cout << "PreOrder: ";
    Preorder(root);
    cout << endl;

    cout << "PostOrder: ";
    Postorder(root);
    cout << endl;
}

