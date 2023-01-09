//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

// bool search(Node *root, int x);

// Node *insert(Node *tree, int val) {
//     Node *temp = NULL;
//     if (tree == NULL) return new Node(val);

//     if (val < tree->data) {
//         tree->left = insert(tree->left, val);
//     } else if (val > tree->data) {
//         tree->right = insert(tree->right, val);
//     }

//     return tree;
// }


bool search(Node* root, int key)
{
    while (root!= NULL)
    {
        if (root->data == key)
        {
            return true;
        }
        else if(root->data > key){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return false;
}

Node* bst_insertion(Node * root, int val){
    if (!(root))
    {
        return new Node(val);
    }
0
    else if (root->data > val)
    {
        root->left =  bst_insertion(root->left, val);
    }
    else{
        root->right = bst_insertion(root->right, val);
    }
    return root;
}

int main() {

        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = bst_insertion(root, k);
        }

        int s;
        cin >> s;

        cout << search(root, s);
        cout << endl;
}
// } Driver Code Ends

// Function to search a node in BST.
bool search(Node* root, int x) {
    if(root == NULL){
        return false;
    }
    else if(root->data == x){
        return true;
    }
    else if(root->data > x){
        return search(root->left, x);
    }
    else{
        return search(root->right,x);
    }
}
