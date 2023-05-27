#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
    map<int,vector<int>> adjlist;
    vector<int> visited;
    vector<bool> discover;
    void addEdge(int u,int v,bool direction)
    {
        //u is the starting vertex
        //v is the ending vertex
        //1--->2 1 is u and 2 is v
        // bool if 0 then undirected graph, if 1 then directed graph

        //create an edge from u to v
        adjlist[u].push_back(v);
        if(direction==0)
        {
            adjlist[v].push_back(u);
        }

    } 

    void printAdjList()
    {
        for(auto i:adjlist)
        {
            cout<<i.first<<"--->";
            for(auto j:i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    // void dfsSearch(int vert,map<int,vector<int>> adjlist,map<int,bool> &visited,vector<int> &component)
    // {
    //     vector<int> ans;
    //     // map<int,bool> visited;
    //     // vector<int> component;
    //     component.push_back(vert);
    //     visited[vert]=true;

    //     //applying dfs to every node
    //     for(auto i: adjlist[vert])
    //     {
    //         if(!visited[i])
    //         {
    //             dfsSearch(i,adjlist,visited,component);
    //         }
    //     }


    // }
    void dfsrec(int k)
    {
        visited[k]=1;
        cout<<k<<"--> ";
        vector<int>::iterator it;
        for(it=adjlist[k].begin();it!=adjlist[k].end();it++ )
        {
            if(!visited[*it])
            {
                dfsrec(*it);
            }
        }
        // cout<<"Completed"<<endl;

       
    }

    void bfsrec(queue<int> &q,vector<bool> &discover)
    {
        if(q.empty())
        {
            return;
        }
        int v=q.front();
        q.pop();
        cout<<v<<"--> ";
        for(int u:adjlist[v])
        {
            if(!discover[u])
            {
                discover[u]=true;
                q.push(u);
            }
        }
        bfsrec(q,discover);
    }

};

int main()
{
    cout<<"Enter the number of vertices: "<<endl;
    int n;
    cin>>n;
    int m;
    cout<<"Enter number of edges: "<<endl;
    cin>>m;
    graph g;
    for(int i=0;i<n;i++)
    {
        g.visited.push_back(0);
    }
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    vector<bool> discover(n,false);
    queue<int> q;
    cout<<"BFS Recursive: "<<endl;
    for (int i = 0; i < n; i++)
    {
        if (discover[i] == false)
        {
            // mark the source vertex as discovered
            discover[i] = true;
 
            // enqueue source vertex
            q.push(i);
 
            // start BFS traversal from vertex `i`
            g.bfsrec(q, discover);
        }
    }
    // g.discover(n,false);
    // cout<<"Enter the node from where you want to start "
    // printAdjList
    cout<<endl;
    cout<<endl;
    g.printAdjList();

    cout<<endl;
    cout<<"DFS Recursive: "<<endl;
    g.dfsrec(0);

}
    



