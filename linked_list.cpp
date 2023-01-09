// Implementations
// e.g.  10 --> 20 --> 30 --> 40 
// #include <iostream>
// #include "node.cpp"
// using namespace std;
// int main()
// {
//     node * n1 = new node(10);
//     node * n2 = new node(20);
//     node * n3 = new node(30);

//     n1->next = n2;
//     n2->next = n3;
//     traversal(n1);
//     // cout << n1->data << " --> " << n2->data << " --> " << n3->data << endl;
//     return 0;
// }

// traversing the list - Iterative
// void traversal(node *&head){
//     node * temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "--> ";
//         temp = temp->next;
//     }
// }

// traversing the linkedlist - Recursive

// void traversal(node *&head){
//     if(head == NULL){
//         return;
//     }
//     cout << head->data << " ";
//     traversal(head->next);

// }

// Search in a linked list

// int position(node * &head, int x){
//     node * temp = head;
//     int pos = 1;  // position of node
//     while (temp != NULL)
//     {
//         if (temp->data == x)
//         {
//             return pos;
//         }
//         temp = temp->next;
//         pos++;
//     }
//     return -1;
     
// }

// Recursive solution -> Search solution

// int position(node *&head, int x)
// {
//     // base case
//     if (head->next == nullptr)
//     {
//         return -1;
//     }
//     if (head->data == x)
//     {
//         return 1;
//     }
//     else
//     {
//         int count = position(head->next, x);
//         if (count == -1)
//         {
//             return -1;
//         }
//         else
//         {
//             return count + 1;                        
//         }
//     }
// }

// Insertion at the begining of the list

// node *insertion(int data, node * head )
// {
//     node * temp = new node(data);
//     temp->next = head;
//     return temp;
// }

// Insertion at tail of the list

// node * insertion_tail(node * tail, int data){
//     if (tail->next == nullptr)
//     {
//         return tail;
//     }   
// }

// insert in a sorted linked list

// node * insertion(node *head , int x){
//     node * temp = new node(x);
//         if(head == NULL){
//             return temp;
//         }
//         if(head->next->data < x){
//             temp->next =head;
//             return temp;
//         }

//         node * curr = head;
//         while (curr->next != NULL && curr->next->data < x)
//         {
//             curr = curr->next;
//         }
//         temp->next = curr->next;
//         curr->next = temp;
//         return head;
        
// }

// More efficiently
// As we are implementing only using head
// int main(){
    // node * n1 = new node(10);
    // n1->next = new node(20);
    // n1->next->next = new node(30);
    // n1->next->next->next = new node(40);
    // traversal(n1);
    // int x;  cin >> x;
    // cout << position(n1, x);
    // cout << n1->data << " --> " << n1->next->data << " --> " << n1->next->next->data << " --> " << n1->next->next ->next->data << endl;
    // traversal(n1);
    // insert at begining operation
    // node * head = nullptr;
    // head = insertion(10, head);

    // head = insertion(20, head);

    // head = insertion(30, head);

    // Insertion at the tail of the list

    // node * tail = nullptr;
    // int x;  cin >> x;
    // tail = insertion_tail(tail, 10);
    // tail = insertion_tail(tail,20);
    // tail = insertion_tail(tail,30);
    // traversal(head);
    // insertion(head, x);
//     return 0;
// }
 

 // { Driver Code Starts
//Initial Template for C++


// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node * next;
//     Node (int x)
//     {
//         data=x;
//         next=NULL;
//     }
        
// };


// void displayList(Node *head)
// {
//     while(head)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }




// bool isSorted(Node * head)
// {
//     if(head->next == NULL){
//         return true;
//     }
//     Node * curr = head;
//     while(curr!= NULL){
//         if(curr->data > curr->next->data){
//             return false;
//         }
//         curr = curr -> next;
//     }
//     return true;
// }
    

// // { Driver Code Starts.


// int main() 
// { 
    
//     int n;
//     cin>>n;

//     int data;
//     cin>>data;
//     struct Node *head = new Node(data);
//     struct Node *tail = head;
//     for (int i = 0; i < n-1; ++i)
//     {
//         cin>>data;
//         tail->next = new Node(data);
//         tail = tail->next;
//     }
//     cout<<isSorted(head) << endl;
//     return 0;
// }  // } Driver Code Ends


// Iterative way of reversing the linked list

// Inefficint- We are tracersing the ll two times

// #include <iostream>
// #include <vector>
// using namespace std;
// struct node
// {
//     int data;
//     node * next;

//     node (int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };


// // node * reverse(node * head){

// //     vector <int> temp;
// //     node * curr = head;
// //     while (curr != NULL)
// //     {
// //         temp.push_back(curr->data);
// //         curr = curr->next;
// //     }
// //     node * curr2 = head;
// //     while (curr2 !=NULL)
// //     {
// //         curr2->data = temp.back();
// //         curr2 = curr2->next;
// //         temp.pop_back();   
// //     }
// //     return head;    
// // }

// // Efficiently, we can do it in only one iteration

// node * reverse(node * head){

//     node * prev = NULL;
//     node * curr = head;
//     while (curr != NULL)
//     {
//         node * next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }


// void display(node * &head){
//     node * curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->data << "-> ";
//         curr = curr->next;
//     }
// }

// int main(){
//     int size, data, ist_data ;
//     cin >> size >> ist_data;

//     node * head = NULL, *tail = NULL;
//     head = new node(ist_data);
//     tail = head;

//     for (size_t i = 1; i < size; i++)
//     {
//         cin >> data;
//         tail->next = new node(data);
//         tail = tail->next;
//     }
//     reverse(head);
//     display(head);
// }

#include <iostream>
#include <vector>
using namespace std;


// struct node{
//     int data;
//     node *next;

//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void display(node * &head){
//     node * curr = head;
//     while (curr != NULL)
//     {
//         cout << head->data << "-> ";
//         curr = curr->next;
//     }
// }



// node *reverse(node * head){
//     vector <int> temp;
//     node * curr1 = head;
//     while (curr1 != NULL)
//     {
//         temp.push_back(curr1->data);
//         curr1 = curr1->next;
//     }
//     node * curr2 = head;
//     while (curr2 != NULL)
//     {
//         curr2->data = temp.back();
//         curr2 = curr2->next;
//         temp.pop_back();
//     }
//     return head;
// }

// mORE EFFICIENTLY

// node * reverse(node * head){
//     node * prev = nullptr;
//     node * curr = head;
//     while (curr!= NULL)
//     {
//         node * next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;

//     }
//     return prev;
// }

// int main(){
//     int size, data, ist_data;
//     cin >> size >> ist_data;

//     node * head = nullptr , *tail = nullptr;

//     head = new node(ist_data);
//     tail = head;
//     for (size_t i = 1; i < size; i++)
//     {
//         cin >> data;
//         tail->next = new node(data);
//         tail = tail->next;
//     }
//     reverse(head);
//     display(head);

    


// }


int main(){
    string g;
    // g = "satyam";
    // g = "ghg";

    
    cout << s;

}