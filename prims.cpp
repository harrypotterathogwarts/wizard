/*
    Name : Ruturaj Panditrao
    Subject : Prim's MST Algorithm
*/
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;  cout<<"Enter Vertices : "; cin>>n;
    int m; cout<<"Enter Edges : "; cin>>m;
    vector<vector<pair<int,int>>>adj(n);

    for(int i=0; i<m; i++)
    {
        int u; cout<<"u: "; cin>>u;
        int v; cout<<"v: "; cin>>v;
        int w; cout<<"w: "; cin>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int>key(n,1e5);
    vector<int>parent(n,-1);
    vector<bool>mst(n,false);

    key[0] = 0;
    parent[0] = -1;

    for(int i=0; i<n; i++)
    {
        int mini = 1e9;
        int u;

        for(int j=0; j<n; j++)
        {
            if(mst[j]==false && key[j]<mini)
            {
                u = j;
                mini = key[j];
            }
        }

        mst[u] = true;
        for(auto it : adj[u])
        {
            int node = it.first;
            int weight = it.second;
            if(mst[node]==false && weight<key[node])
            {
                parent[node] = u;
                key[node] = weight;
            }
        }
    }
    cout<<endl;
    for(int i=1; i<n; i++)
    {
        cout<<parent[i]<<"->"<<i<<endl;
    }
    int msta=0;
    for(int i=0 ; i<n; i++) msta+=key[i];
    cout<<msta<<endl;
}