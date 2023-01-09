#include <iostream>
#include <vector>
using namespace std;

// adjacency list of a graph

void add_edge(vector <int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector <int> adj[], int v){
    for(int i{0}; i < v ; i++){
        for (auto &&i : adj[i])
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main(){
    vector <int> adj[4];
    add_edge(adj,0,1);
    add_edge(adj,0,2);
    add_edge(adj,1,2);
    add_edge(adj,1,3);
    print(adj,4);

}

