/*
Defn- Stack is a linear ds which is based upon LIFO(last in first out).
Push - when you insert something in the stack
pop - when you remove element from the stack

Stack operations:
isempty() : Return true if stack is empty, else false
push(x) : Inserts  an item to the top of the stack
pop() : removes an item from the top
peek() : Returns the top item
size() : Returns the size of the stack

Two conditons: 
Underflow: When the pop() or push is called 
          called an empty stack
Oveflow :
when push called on a full stack

Applications of stack:
-> Function is executed in LIFO order
-> Checking for Balanced paranthesis - problems
-> Reversing Items
-> Infix to prefix/ postfix
-> Evaluation of postfix and prefix
-> Stock span problems and its variations (very imp.)
-> UNDO REDO operation
OR
-> Forward and Backward





*/



// #include <iostream>
// #include <vector>
// using namespace std;
// Stack implementation using array
// struct my_stack{
//     int cap;
//     int *arr;
//     int top;
    
//     // Declaration of a stack
//     my_stack(int cap){
//         this->cap = cap;
//         arr = new int[cap];
//         top = -1;
//     }

//     void push(int data){
//         // if the stack is full
//         if (top == cap-1)
//         {
//             cout << "Overflow" << "\n";
//             return;
//         }
        
//         top++;
//         arr[top] = data;
//     }

//     int pop(){
//         // If the stack is empty
//         if (top == -1)
//         {
//             cout << "Underflow" << "\n";
//             return INT_MIN;
//         }
        
//         int temp = arr[top];
//         top--;
//         return temp;
//     }
//     int size(){
//         return top+1;
//     }
//     int peek(){
//         // If the stack is empty
//         if (top == -1)
//         {
//             return INT32_MAX;
//         }
        
//         return arr[top];
//     }
//     bool is_empty(){
//         return (top == -1);
//     }

// };

// Stack implementation using vector

// Time - Amorotized O(1)

// struct my_stack2{
//     vector <int> v;
//     void push(int data){
//         v.push_back(data);
//     }
//     int pop(){
//         int temp = v.back();
//         v.pop_back();
//         return temp;
//     }
//     int size(){
//         return v.size();
//     }
//     int peek(){
//         return v.back();
//     }
//     bool is_empty(){
//         return v.empty();
//     }
// };

// int main(){
//     // my_stack s1(5);
//     my_stack2 s1;
//     // cout << s1.pop() << endl;
//     // cout << s1.peek() << endl;
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);    
//     s1.push(40);
//     s1.push(50);
//     s1.push(60);  // this will show overflow

//     cout << s1.pop() << endl;
//     cout << s1.size() << endl;
//     cout << s1.peek() << endl;
//     cout << boolalpha << s1.is_empty() << endl;
// } 

// Linked list implementation of stack using linked list

// Time - O(1)
// Space - O(1)

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

struct my_stack{
    int size;
    node * head;
    my_stack(){
        head = NULL;
        size = 0;
    }
    void push(int data){
        node * temp = new node(data);
        temp->next = head;
        head = temp;
        size ++;
    }

    int pop(){
        if (head == NULL)
        {
            return INT32_MIN;

        }
        
        int temp = head->data;
        node * temp_head = head;
        head = head->next;
        delete(temp_head);
        size--;
        return temp;
    }
    int size_s(){
        return size;
    }
    int peek(){
        if(head == NULL){
            return INT32_MIN;
        }
        return head->data;
    }

    bool is_empty(){
        return (head == NULL);
    }

};

int main(){
    my_stack s;
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.pop() << endl;
    cout << s.size_s() << endl;
    cout << s.peek() << endl;
    cout << s.is_empty() << endl;
}





