#include<iostream>
using namespace std;
class Graph{
int v;
list<int> *adj;
public:
    Graph(int v);
    void addEdge(int u int v);
    void topoligcal();
};
Graph:Graph(int v)
{
    this->v=v;
    adj=new list<int>[v];
}
void Graph:: addEdge(int u, int v);
{
    adj[u].push_back(v);
}
