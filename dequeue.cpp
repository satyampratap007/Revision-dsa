/*
Theory:- It stands for doubly ended Queue.
So basically it has two ends and we can peerform insertion and deletion from both the end

Implementation:
i) Array
ii) Linked list

i) Array -> We will use circular array i.e. array with both front and rear index. 
we can also use front and size and get rear using size.
 
 ii) Linked list -> we will use doubly linked list for the implementation as we can able to perform dequeue operatio in O(1) time

Applications:
Maximum and minimum of all subarrays of size k in an array

*/

// Implementation of dequeue using array

// simple implementation of dequeue 

// insertion and deletion operation will take O(n) time

// #include <iostream>
// using namespace std;


// struct dequeue{
//     int *arr;
//     int capacity;
//     int size;

//     dequeue(int capacity){
//         this->capacity = capacity;
//         size = 0;
//         arr = new int[capacity];
//     }

        
//     bool is_full(){
//         return size == capacity;    
//     }

//     bool is_empty(){
//         return (size == 0);
//     }

//     void insert_rear(int data){
//         if (is_full())
//         {
//             return ;
//         }
//         arr[size] = data;
//         size++;
//     }

//     void delete_rear(){
//         if (is_empty())
//         {
//             return;
//         }
//         size--;
//     }

//     int get_rear(){
//         if (is_empty())
//         {
//             return -1;
//         }
//         return size-1;
//     }
//     void insert_front(int data){
//         if (is_full())
//         {
//             return;
//         }
//         for (size_t i = size-1; i > 0; i--)
//         {
//             arr[i+1] = arr[i];
//         }
//         arr[0] = data;
//         size++;
//     }

//     void delete_front(){
//         if (is_empty())
//         {
//             return;
//         }
        
//         for (size_t i = 0; i < size-1; i++)
//         {
//             arr[i] = arr[i+1];
//         }
//         size --;
        
//     }
//     int get_front(){
//         if (is_empty())
//         {
//             return -1;
//         }
//         else return 0;
//     }
// };

// More efdicient solution where each operation will take O(1) time

// struct dequeue
// {
//     int *arr;
//     int size, capacity, front;

//    dequeue(int capacity){
//     this->capacity = capacity;
//     size = 0;
//     front = 0;
//     arr = new int[capacity];
//    }

//    bool is_empty(){
//     return (size == 0);
//    }

//    bool is_full(){
//     return (size == capacity);
//    }

//    int get_front()
//    {
//        if (is_empty())
//        {
//            return -1;
//        }
//        else
//        {
//            return front;
//        }
//    }

//    int get_rear(){
//     if(is_empty()){
//         return -1;
//     }
//     else{
//         return ((front + size -1)%capacity);
//     }
//    }

//    void insert_front(int data){
//     if (is_full)
//     {
//         return;
//     }
//     else
//     {
//         int new_front = (front -1 +capacity)%capacity;
//         arr[new_front] = data;
//         size++;
//     }
//    }

//    void insert_rear(int data){
//     if (is_full())
//     {
//         return;
//     }
//     else{
//         int rear = get_rear();
//         rear = (rear + 1);
//         arr[rear] = data;   
//         size ++;
//     }
//    }


//    void delete_front(){
//     if (is_empty())
//     {
//         return;
//     }
//     else
//     { 
//         front = (front+1)%capacity;
//         size--;
//     }
//    }

//    void delete_rear(){
//     if (is_empty())
//     {
//         return;
//     }
//     else
//     {
//         size --;
//     }
//    }
// };

