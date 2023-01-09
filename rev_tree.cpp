// #include <iostream>
// #include <queue>
// using namespace std;

// struct node
// {
//     int data;
//     node*left;
//     node*right;
//     node(int data){
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *build_tree(node*root){
//     int data;
//     cout << "Enter the data: ";
//     cin >> data;
//     root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }
    
//     cout << "Enter the data to insert in the left side of the " << data << ": ";
//     root->left = build_tree(root->left);
//     cout << "Enter the data to insert in the right side of the " << data << ": ";
//     root->right = build_tree(root->right);
//     return root;
// }


// void level_order(node *root){
//     // base  case
//     if(root == NULL){
//         return;
//     }

//     queue <node*> q;
//     q.push(root);
//     while (!(q.empty()))
//     {
//         node * temp = q.front();
//         q.pop();
//         cout << temp->data << " ";
//         if (temp->left != NULL);
//         {
//             q.push(temp->left);
//         }
//         if(temp->right != NULL)
//         {
//             q.push(temp->right);
//         }
//     }
// }

// int main(){
//     node * root = nullptr;
//     build_tree(root);

//     cout << "Level order traversal of a binary tree: " << "\n";
//     level_order(root);
// }



// #include <iostream>
// #include <set>
// using namespace std;  
// int kthSmallest(int arr[], int n, int k)
// {
//     // Insert all elements into the set
//     set<int> s;
//     for (int i = 0; i < n; i++)
//         s.insert(arr[i]);
//       // Traverse set and print k-th element
//     auto it = s.begin();
//     for (int i = 0; i < k - 1; i++)
//         it++;
//     return *it;
// }
  
// int main()
// {
//     int arr[] = { 12, 3, 5, 7, 3, 19 };
//     int n = sizeof(arr) / sizeof(arr[0]), k = 2;
//     cout << "K'th smallest element is "
//          << kthSmallest(arr, n, k);
//     return 0;
// } 


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int sum = (n%10);
//     n/=10;
//     sum +=(n%10);
//     n/=10;
//     sum +=(n%10);
//     n/=10;
//     sum +=(n%10);
//     n/=10;
//     sum +=(n%10);
//     n/=10;
//     sum +=(n%10);
//     n/=10;
//     sum +=(n%10);
//     cout << sum;
// }

// left rotation 

#include <iostream>
using  namespace std;

void rotation(int *arr, int low, int high){
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}


void left_rotation(int *arr,int size, int k){
    rotation(arr,0,k);
    rotation(arr,k+1, size-1);
    rotation(arr, 0 , size-1);
  
}


int main(){
    int n;
    cin >> n;
    int k;  cin >> k;
    cout << "Enter array elements: ";
    int * arr = new int [n];
    for(size_t i {0}; i < n; ++i){
      cin >> arr[i];
    }
    left_rotation(arr, n, k);

    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
       
    
    
    delete [] arr;
    return 0;
    
}