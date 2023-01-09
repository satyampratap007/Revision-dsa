/* Advantages:- 
i) We can traverse the whole list from any node
ii) Implementation of algorithm like round robin
iii) We can insert at the begining and end by just maintaining one tail/ reference/ pointer

Disadvantages:- Implementations of operations become complex of circular ll


*/


#include <iostream>
using namespace std;

struct node
{
    int data;
    node * next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void display(node * &head){
    node * curr = head;
    while (curr != NULL)
    {
        cout << head->data << "-> ";
        curr = curr->next;
    }
}

int main(){
    int size, data, ist_data;
    node * head = NULL;
    node * tail;
    head = new node(ist_data);
    tail = head;
    for (size_t i = 1; i < size; i++)
    {
        cin >> data;
        tail->next = new node(data);
        tail = tail->next;
    }
    display(head);
}