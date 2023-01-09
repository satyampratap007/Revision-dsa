/*
Theory :
Queue is also called as FIFO data structure.

Dequeue :- 10(Front) -> 20 -> 30 -> 40 -> 50(Rear) :- Enqueue

i.e Front will change if you'll Dequeue an item and vice versa
Opearations:
Enqueue(data)
Dequeue()
getFront()
getRear()
isEmpty()
size()
.

Applications:
Single resource and multiple cosumers
Synchronization b/w fast and slow devices
In OS (Semaphors , FCFS, scheduling, spooling , buffer from devices like keyboards)
In CN (Routers/ switches and mail queues)
Variations: Dequeue, Priority Queue and doubly ended priority queue

*/ 

// Implementation of queue using Array


// Naive implemntation of queue -> Enqueue(), Dequeue(), getFront(), getRear(),isEmpty()

// Enqueue -> O(1)
// Dequeue -> O(n)

// #include <iostream>
// using namespace std;

// struct queue
// {
//     int size;
//     int * arr;
//     int capacity;

//     queue(int capacity){
//         size = 0;
//         this->capacity = capacity;
//         arr = new int[capacity];
//     }

//     bool is_Empty(){
//         return (size == 0);
//     }

//     bool isFull(){
//         return(size == capacity);
//     }

//     void enqueue(int data){
//         if (isFull())
//         {
//             return;
//         }
//         arr[size] = data;
//         size++;
//     }
//     void dequeue(){
//         if (is_Empty())
//         {
//             return;
//         }
//         for (size_t i = 0; i < size-1; i++)
//         {
//             arr[i] = arr[i++];
//         }
//         size--;
//     }
//     int get_front(){
//         if (is_Empty())
//         {
//             return -1;
//         }
        
//         return 0;
//     }
//     int get_rear(){
//         if (is_Empty())
//         {
//             return -1;
//         }
//         return size-1;
//     }

//     int size(){
//         return size;
//     }    
// };

// Revision of queue of without using circular queue

// #include <iostream>
// using namespace std;


// struct queue
// {
//     int capacity;
//     int size;
//     int *arr;
//     queue(int capacity){
//         this->capacity = capacity;
//         arr = new int[capacity];
//         size = 0;
//     }

//     bool is_full(){
//         // if(size == capacity){
//         //     return true;
//         // }
//         // return false;
// // OR
//         return (size == capacity);
//     }

//     bool is_empty(){
//     //     if(size == 0){
//     //         return true;
//     //     }
//     //     else
//     //     {
//     //         return false;
//     //     }
//     // OR
//         return (size == 0);
//     }

//     void enqueue(int data){
//         if (is_full())   // to check if queue is full or not
//         {
//             cout << "Queue is already full " << "\n";
//             return;
//         }
//         else
//         {
//             arr[size] = data;
//             size ++;
//         }
//     }

//     void dequeue(){
//         if (is_empty())
//         {
//             cout << "Quueue is empty " << "\n";
//             return;
//         }
//         else
//         {
//             for (size_t i = 0; i < size-1; i++)
//             {
//                 arr[i] = arr[i+1];
//             }
//             size--;
//         }
//     }

// int get_front(){
//     if (is_empty())
//     {
//         return -1;
//     }
//     else
//     {
//         return arr[0];
//     }
// }

// int get_rear(){
//     if (is_empty())
//     {
//         return -1;
//     }
//     else
//     {
//         return size-1;
//     }
// }
// };


// #include <iostream>
// using namespace std;


// struct queue
// {
//     int front;
//     int *arr;
//     int capacity;
//     int size;

//     queue(int capacity)
//     {
//         this->capacity = capacity;    
//         arr = new int[capacity];
//         front = 0;
//         size = 0;
//     }

//     bool is_empty(){
//         return size == 0;
//     }

//     bool is_full(){
//         return (size == capacity);
//     }

//     int get_front(){
//         if (is_empty())
//         {
//             return -1;
//         }
//         else
//         {
//             return front;
//         }
//     }
    
//     int get_rear(){
//         if (is_empty())
//         {
//             return -1;
//         }
//         else
//         {
//             return (front + size -1)%capacity;
//         }
//     }

//     void enqueue(int data){
//         if (is_full())
//         {
//             return ;
//         }
//         int rear = get_rear();
//         rear = (rear+1)%capacity;
//         arr[rear] = data;
//         size++;
//     }

//     void dequeue(){
//         if (is_empty())
//         {
//             return;
//         }    
//         front = (front + 1)%capacity;
//         size--;
//     }
 
// };

// linked list implementation of queue

// #include <iostream>
// using namespace std;


// struct node{
//     int data;
//     node * next;
//     node(int data){
//         this->data = data;
//         next = NULL;
//     }
// };

// struct queue

// {
//     node *front, * rear;
//     int size;

//     queue(){
//         size = 0;
//         front = NULL;
//         rear = NULL;
//     }

//     void enqueue(int data){
//         node * temp = new node(data);

//         if (front == NULL)
//         {
//             front = rear = temp;
//             return;
//         }
//         rear->next = temp;
//         rear = temp;
//         size++;
//     }

//     void dequeue(){
//         // If queue is empty
//         if (front == NULL)
//         {
//             return;
//         }
//         node * temp = front;
//         front = front->next;
//         // For the last node of the queue 
//         // where we have to make both front and rear empty
//         if (front == NULL)
//         {
//             rear = NULL;
//         }
//         delete(temp);
//         size--;
//     }
//     int get_size(){
//         return size;
//     }

//     int get_front(){
//         if (front == NULL)
//         {
//             return -1;
//         }
//         else{
//             return front->data;
//         }
//     }

//     int get_rear(){
//         if(front == NULL){
//             return -1;
//         }
//         else
//         {
//             return  rear->data;
//         }
//     }
// };

 


// #include<iostream>
// #include<string.h>
// #include<stdio.h>
// #include<cstdlib>
// #include<fstream>

// using namespace std;
// char empfile[30]   = "Employee.txt";
// char ITfile[20]    = "IT.txt";
// char Adminfile[25] = "Admin.txt";
// char Prodfile[30]  = "Production.txt";
// char Salesfile[30] = "Sales.txt";

// class emp
// {
//      int empid;
//      char name[30];
//      char address[60];
//      int age;
//      public:
//           char dept[15];
//      void get();
//      char *getdept()
//      {
//           return dept;
//      }
// };
// void emp::get()
// {
//      cout<<"\n Enter Employee Id     :  ";
//      cin>>empid;
//      cout<<"\n Enter Name            :  ";
//      cin>>name;
//      cout<<"\n Enter Address         :  ";
//      cin>>address;
//      cout<<"\n Enter Department Name:(Admin/Sales/IT/Production)  :  ";
//      cin>>dept;
//      cout<<"\n Enter Age   :  ";
//      cin>>age;
// }
// void insert()
// {
//      emp e;
     
//      ofstream fout; //ofstream is a class, fout is its object. It can be used only to write into the file.

//      //file is open in the binary, append and nocreate mode.
//      fout.open("Employee.txt",ios::in | ios::out | ios::binary | ios::app | ios::ate);
     
//      if (fout.fail())
//      {
//           cout<<"\n Unable to Open the File!!!";
//           goto err;
//      }
//      e.get(); // accepting the details from the user.
//      fout.write((char *)&e,sizeof(e)); //writing into the file with fout object.
//      if(fout.tellp()%sizeof(e)==0)
//      {
//           cout<<"\n Record Inserted !!!"<<endl;
//      }
//      else
//      {
//           cout<<"\n Insertion Failed !!!";
//           goto err;
//      }
//      err:
//           fout.close();
        
// }
// void sort() // This function will insert the record according to department in respective file.
// {
//      emp e;
//      ofstream adm,sal,pro,it; //all files have been created for writing mode.
//      ifstream fin; // fin object belongs to the ifstream class, it is used to read the file contents only.
//      adm.open(Adminfile, ios::out | ios::binary | ios::app);
//      sal.open(Salesfile, ios::out | ios::binary | ios::app);
//      pro.open(Prodfile, ios::out | ios::binary | ios::app);
//      it.open(ITfile, ios::out | ios::binary | ios::app);
//      fin.open(empfile, ios::in | ios::binary);
//      while(fin.read((char *)&e,sizeof(e))) //reading the file contents till it reaches end of file.
//      {
//           if(strcmp(e.getdept(),"Admin")==0)
//           {
//                adm.write((char *)&e,sizeof(e));
//                cout<<"\n Record Inserted into ADMIN File!!!";
//           }
//           else if(strcmp(e.getdept(),"Sales")==0)
//           {
//                sal.write((char *)&e,sizeof(e));
//                cout<<"\n Record Inserted into SALES File!!!";
//           }
//           else if(strcmp(e.getdept(),"IT")==0)
//           {
//                it.write((char *)&e,sizeof(e));
//                cout<<"\n Record Inserted into IT File!!!";
//           }
//           else if(strcmp(e.getdept(),"Production")==0)
//           {
//                pro.write((char *)&e,sizeof(e));
//                cout<<"\n Record Inserted into Production File!!!";
//           }
//           else
//                cout<<"\n Insert Correct Record!!!";
//      }
//      fin.close();
//      adm.close();
//      sal.close();
//      it.close();
//      pro.close();
// }
// int main()
// {
//      int n;
//      cout<<"\n Enter No. of Records You Want? : ";
//      cin>>n;
//      for(int i=0; i<n; i++)
//      {
//           insert();
//      }
//      sort();
//      return 0;
// }

// #include <iostream>
// #include <fstream>
// #include<string>
// using namespace std;

// int main()
// {
//     int choice,option;
//     string pass,epass;
//     string ename,dept,line;
//     int salary,num;
//     pass = "hello";
//     cout << "\tDatabase Employee"<<endl;
//     cout << "Enter Password: ";
//     cin >> epass;

//     if(epass == pass)
//     {
//         system("cls");
//     }
//     else
//     {
//         cout << "Invalid Password" << endl;
//         exit(0);
//     }

//     do
//     {
//         cout << "\n\tDATABASE EMPLOYEE\t\n"<<endl;
//         cout << "MENU: "<<endl;
//         cout << "1. Add Entry"<<endl;
//         cout << "2. Display"<<endl;
//         cout << "3. Delete"<<endl;
//         cout << "4. Exit"<<endl;
//         cout << "Enter Option:: ";
//         cin >> option;

//         switch(option)
//         {
//         case 1:
//         {

//             cout << "\t-- EMPLOYEE DATABASE --\n" << endl;
//             cout << "Number of Employee Entries to make: ";
//             cin >> num;
//             for(int i = 0; i < num; i++)
//             {
//                 cout << "Enter Employee Name: ";
//                 cin >> ename;
//                 cout << "Enter Employee Department: ";
//                 cin >> dept;
//                 cout << "Enter Employee Salary: ";
//                 cin >> salary;
//                 ofstream fout("edata.txt",ios::app);
//                 fout<<ename<<"\t\t"<<dept<<"\t\t"<<salary<<"\n";
//                 fout.close();
//                 cout << endl;
//             }
//             cout << "Data Stored."<<endl;
//             system("pause");
//             break;
//             }

//             case 2:
//             {
//                 cout << "\nEmployee Database in File: \n" << endl;
//                 ifstream fin("edata.txt");
//                 while (fin) {
//                     getline(fin, line);
//                     cout << line << endl;
//                 }
//                 fin.close();
//                 break;
//             }

//             case 3:
//             {
//                 int linenum;
//                 cout << "Enter which position entry to delete: ";
//                 cin >> linenum;
//                 string filename = "edata.txt";
//                 ifstream fin("edata.txt");
//                 ofstream fout;
//                 fout.open("temp.txt", ios::out);

//                 char ch;
//                 int line = 1;
//                 while(fin.get(ch))
//                   {
//                     if(ch == '\n')
//                       line++;

//                     if(line != linenum)
//                       fout<<ch;
//                   }
//                   fout.close();
//                   fin.close();
//                   remove("edata.txt");
//                   rename("temp.txt", "edata.txt");
//                   break;
//             }

//             case 4:
//             {
//                 system("cls");
//                 cout << "DATABASE LOGGED OUT\n" << endl;
//                 exit(0);
//             }
//         }

//         cout << "\nEnter Choice [0 to Exit| 1 to Continue]: ";
//         cin >> choice;
//         if(choice!=0 && choice!=1)
//         {
//             cout << "Invalid Choice!\n" << endl;
//             exit(0);
//         }
//     }while(choice!=0);
// }

// We recommend to first see the implementation of DFS. We can modify DFS to find Topological Sorting of a graph.
//  In DFS, we start from a vertex, we first print it and then recursively call DFS for its adjacent vertices. 
//  In topological sorting, we use a temporary stack. We don’t print the vertex immediately, we first recursively call
//   topological sorting for all its adjacent vertices, then push it to a stack. Finally, print contents of the stack. 
//   Note that a vertex is pushed to stack only when all of its adjacent vertices (and their adjacent vertices and so on) 
//   are already in the stack. 
// Below image is an illustration of the above approach:

// Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge u v,
//  vertex u comes before v in the ordering.
//  Topological Sorting for a graph is not possible if the graph is not a DAG.
// For example, a topological sorting of the following graph is “5 4 2 3 1 0”.
//  There can be more than one topological sorting for a graph. 
// For example, another topological sorting of the following graph is “4 5 2 3 1 0”. 
// The first vertex in topological sorting is always a vertex with in-degree as 0 (a vertex with no incoming edges).





#include <iostream>
#include <list>
#include <stack>
using namespace std;
 
// Class to represent a graph
class Graph {
    int V; // No. of vertices'
 
    // Pointer to an array containing adjacency listsList
    list<int>* adj;
 
    // A function used by topologicalSort
    void topologicalSortUtil(int v, bool visited[], stack<int>& Stack);
 
public:
    Graph(int V); // Constructor
 
    // function to add an edge to graph
    void addEdge(int v, int w);
 
    // prints a Topological Sort of the complete graph
    void topologicalSort();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    
    adj[v].push_back(w); // Add w to v’s list.
}
 
// A recursive function used by topologicalSort
void Graph::topologicalSortUtil(int v, bool visited[],
                                stack<int>& Stack)
{
    // Mark the current node as visited.
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);
 
    // Push current vertex to stack which stores result
    Stack.push(v);
}
 
// The function to do Topological Sort. It uses recursive
// topologicalSortUtil()
void Graph::topologicalSort()
{
    stack<int> Stack;
 
    // Mark all the vertices as not visited
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to store Topological
    // Sort starting from all vertices one by one
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack);
 
    // Print contents of stack
    while (Stack.empty() == false) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}
 
// Driver program to test above functions
int main()
{
    // Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
 
    cout << "Following is a Topological Sort of the given graph n: ";
    g.topologicalSort();
 
    return 0;
}

