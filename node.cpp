// #include <iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node * next;  // self refrential class
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// Traversal of linkedlist -> Iterative


#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void traversal(node* &head){
    node * temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

copy_constructor(node *head){
    
    
}

// Insertion at the end of the linkedlist

node * insertion_tail(node *head, int data){
    node*temp = new node(data);
    if (head == NULL)
    {
        return temp;
    }
    node * current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    temp->next = NULL;
    return head;
}






int main(){
    node * head = new node(10);
    head->next  = new node(20);
    head->next->next = new node(30);
    // head = insertion_begining(head, 5);
    head = insertion_tail(head, 40);
    // delete_node(head);
    // delete_last(head);

    node *obj = head;

    copy_constructor(obj);
    traversal(head);

    // cout << head->data << " --> " << head->next->data << " --> " << head->next->next->data << " --> "<< "null" << endl;

}



// Traversal of linked list -> Recursive

// void traversal(node *head){
//     if (head == nullptr)
//     {
//         return;                
//     }
//     cout << head->data << " ";
//     traversal(head->next);
    
// }




// Insertion at the begining of the linkedlist

// node * insertion_begining(node*head,int data){
//     node * temp = new node(data);
//     temp->next = head;
//     return temp;
// }



// Delete first node of a linked list

// node * delete_node(node * &head){
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     node * temp = head;
//     head = head->next;
//     delete temp;
//     return head;
// }
 
// Delete last of a linked list

// node * delete_last(node *&head){
//     // If there will be only one element
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     if (head->next->next == NULL)
//     {
//         delte(head);
//         return nullptr;
//     }
//     node * curr = head;
//     while (curr->next->next  != NULL)
//     {
//         curr = curr->next;
//     }
//     node * temp = curr;
//     curr = curr->next;
//     delete(curr);
//     temp->next = NULL;
//     return head;
// }

// Insert at the given position

// node * insert_position(node * head,int position, int data){
//     node * curr = head;  // current position of the element
//     node * temp = new node(data);
// =    if (head == NULL)
//     {
//         return head;
//     }
    

    
//     int count{1};
//     while (count < position)
//     {
//         curr = curr->next;
//         count++;
//     }
    
// }












