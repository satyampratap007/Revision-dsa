// Implementation of Binary tree
#include <iostream> 
#include <bits/stdc++.h>
#include <cmath>
#include <queue>
using namespace std;

struct  tree_node
{
    int data;
    tree_node * left;
    tree_node * right;

    tree_node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }  
};

// General way of creating tree
// int main(){
//     // tree_node * root = NULL;  // for empty tree
//     tree_node * root = new tree_node(10);
//     root->left = new tree_node(20);
//     root->right = new tree_node(30);
//     root->left->left = new tree_node(40);
//     root->left->right = new tree_node(50);
// }

// Recursive way of creating tree 
tree_node * build_tree(tree_node * root)
{
    cout << "Enter the data: " << "\n";
    int data;   cin >> data;
    root = new tree_node(data);
 
    if(data == -1){
        return NULL;
    }

    cout << "Enter the data to insert in the left side of the " << data  << ": "<< "\n";
    root->left = build_tree(root->left);

    cout << "Enter the data to insert  in the right side of the " << data  << ": "<< "\n";
    root->right = build_tree(root->right);
    return root; 

}


// Traversals on Binary tree:-

// Inorder traversal

void inorder_traversal(tree_node*root){
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder_traversal(root->left);
        std::cout << root->data << " ";
        inorder_traversal(root->right);
    }    
}

// Preorder Traversal

void preorder_traversal(tree_node *root){
    if (root == NULL)
    {
        return;
    }
    else
    {
        std::cout << root->data << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

// Postorder Traversal

void postorder_traversal(tree_node * root){
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout << root->data << " ";
    }
    
    
}

// Height of a binary tree
// Time = O(n)
// Space = O(height + 1)

int heightOfBT(tree_node * root){
    if (root == NULL)
    {
        return 0;
    }
    int left_height = heightOfBT(root->left);
    int right_height = heightOfBT(root->right);

    return  max(left_height,right_height)+1;
}


// Print node at distance K
// Time = O(n)
// Space = O(height + 1)

void print_node(tree_node * root, int k){
    if (root == NULL) // This should be first because for a certain case it'll become null
    {                 // and will throw output for null->left and null->right
        return;
    }
    if (k == 0)
    {   
        cout << root->data << " "; 
    }
    
    print_node(root->left, k-1);
    print_node(root->right, k-1);
}


// Level Order Traversal

// Time -> O(n + (height*n))
// Space -> O(height)
void levelorder_traversal(tree_node *root){
    if (root == NULL)
    {
        return;
    } 
    int height = heightOfBT(root);
    for (size_t i = 0; i <= height; i++)
    {
        print_node(root,i);
        cout << "\n";
    }
}

// More optimized solution
// Time - theta(n)
// in general = space -> O(n)
// Space - theta(width) for perfectly balanced tree
// space-> theta(1) for completely skewed


void levelorder_traversal2(tree_node* root){
    if (root == nullptr)
    {
        return;
    }
    else
    {
        queue <tree_node*>q;
        q.push(root);

        while (!(q.empty()))  // loop will run until the queue is empty
        {
            tree_node * temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

// Time - O(n)
// Space -> theta(height)
// Size of a Binary tree

// Recursive solution
int size_bt(tree_node * root){
    if(root == NULL){
        return 0;
    }
    int left_count = size_bt(root->left);
    int right_count = size_bt(root->right);
    return 1 + left_count + right_count;
}

// time -> O(n)
// space -> theta(width)
// Iterative solution
int  size_bt_iterative(tree_node * root){
    if (root == NULL)
    {
        return 0;
    }

    int count{0};  // counter to count the size of bt
    queue <tree_node *> q;

    q.push(root);

    while (!(q.empty()))
    {
        tree_node * temp = root;
        q.pop();
        count++;
        if (temp->left != NULL)
        {
            q.push(temp->left);            
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);            
        }
    }
    return count;
}

// Maximum in a binary tree

// Time -> O(n)
// Space -> O(height)
// Recursive solution

int max_bt(tree_node * root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    int max_left = max_bt(root->left);
    int max_right = max_bt(root->right);

    return max(root->data, max(max_left,max_right));
}

// Iterative Solution

// We can perform operation in skewed bt very efficienty
int max_bt2(tree_node * root){

    if (root == NULL)
    {
        return INT_MIN;
    }

    int maxx = root->data;

    queue <tree_node*> q;
    q.push(root);
    while (!(q.empty()))
    {
        tree_node*temp = q.front();
        q.pop();
        if (temp->data > maxx)
        {
            maxx = temp->data;
        }
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
    return maxx;
}

// Iterative approach - INORDER Traversal

// void inorder_itereative(tree_node * root){
//     if (root == NULL)
//     {
//         return;
//     }
//     stack <tree_node*> s;
//     tree_node*curr = root;
//     while (curr != NULL || s.empty() == false)
//     {
//         while (curr!= NULL)
//         {
//             s.push(curr);
//             curr = curr->left;
//         }
//         curr = s.top();
//         s.pop();
//         cout << curr->data << " "; 
//         curr = curr->right;
//     }
// }

// level order traversal

// void level_order(tree_node * root){
//     if(root == NULL){
//         return;
//     }
//     queue <tree_node*> q;
//     q.push(root);

//     while (!(q.empty()))
//     {
//         tree_node * temp = root;
//         q.pop();
//         cout << temp->data << " ";
//         if (temp->left != NULL)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right != NULL)
//         {
//             q.push(temp->right);
//         }
    
//     }

// }


int main(){
    tree_node * root = NULL;
    root = build_tree(root);
    
    cout << "Inorder traversal: " << "\n";
    inorder_traversal(root);
    
    cout << "\nPostorder Traversal: " << "\n";
    postorder_traversal(root);

    cout << "\nPreorder Traversal: " << "\n";
    preorder_traversal(root);

    cout << "\nLevel Order Traversal: " << "\n";
    levelorder_traversal(root);
    cout << "\n";
    levelorder_traversal2(root);

    cout << "\n Size of a binary tree: " << size_bt(root);

    // cout << "\nMaximum in a binary tree: " << max_bt(root);
    cout << "\nMaximum in a binary tree: " << max_bt2(root);

    cout << "\nIterative Inorder Traversal: " << "\n";
    // inorder_itereative(root);



    // cout << "\nHeight of binary tree: " << heightOfBT(root);

    // cout << "\nEnter the value of k: ";
    // int k;  cin >> k;
    // print_node(root, k);
    
    return 0;
}