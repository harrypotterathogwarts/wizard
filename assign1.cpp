#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    map<int, vector<int>> adjlist;
    vector<int> visited;
    vector<bool> discover;
    void addEdge(int u, int v, bool direction)
    {
        // u is the starting vertex
        // v is the ending vertex
        // 1--->2 1 is u and 2 is v
        //  bool if 0 then undirected graph, if 1 then directed graph

        // create an edge from u to v
        adjlist[u].push_back(v);
        if (direction == 0)
        {
            adjlist[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adjlist)
        {
            cout << i.first << "--->";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

   
    void dfsrec(int k)
    {
        visited[k] = 1;
        cout << k << "--> ";
        vector<int>::iterator it;
        for (it = adjlist[k].begin(); it != adjlist[k].end(); it++)
        {
            if (!visited[*it])
            {
                dfsrec(*it);
            }
        }
        // cout<<"Completed"<<endl;
    }

    void bfsrec(queue<int> &q, vector<bool> &discover)
    {
        if (q.empty())
        {
            return;
        }
        int v = q.front();
        q.pop();
        cout << v << "--> ";
        for (int u : adjlist[v])
        {
            if (!discover[u])
            {
                discover[u] = true;
                q.push(u);
            }
        }
        bfsrec(q, discover);
    }
};

int main()
{

    graph g;
    char c;
    int k;
    queue<int> q;

    cout << "Enter the number of vertices: " << endl;
    int n;
    cin >> n;
    int m;
    cout << "Enter number of edges: " << endl;
    cin >> m;
    vector<bool> discover(n, false);
    // for (int i = 0; i < n; i++)
    // {
    //     g.discover.push_back(false);
    // }
    do
    {
        cout << "What do you want to perform: \n 1.Create Graph \n 2. Print adjacency List \n 3. DFS \n 4. BFS \n 5. Exit" << endl;
        cin >> k;
        switch (k)
        {
        case 1:

            cout << "Enter the edges: " << endl;

            for (int i = 0; i < n; i++)
            {
                g.visited.push_back(0);
            }

            for (int i = 0; i < m; i++)
            {
                int u, v;
                cin >> u >> v;
                g.addEdge(u, v, 0);
            }
            break;

        case 2:
            g.printAdjList();
            break;

        case 3:
            cout << "DFS Recursive: " << endl;
            g.dfsrec(0);
            break;

        case 4:

            cout << "BFS Recursive: " << endl;
            for (int i = 0; i < n; i++)
            {
                if (discover[i] == false)
                {
                    // mark the source vertex as discovered
                    discover[i] = true;

                    // enqueue source vertex
                    q.push(i);

                    // start BFS traversal from vertex `i` we have initialised it to zero
                    g.bfsrec(q, discover);  

                }
            }
            // g.bfsrec(q, discover);
            break;

        case 5:
            cout << "Thank You" << endl;
            exit(0);
            break;
        }
        cout << "Do you want to continue? (y/n)";
        cin >> c;
    } while (c == 'y' || c == 'Y');

    // cout << endl;
}



// https://github.com/JigyarthJoshi/SPPU-TE-COMP-SEM-2-2019-PATTERN-ALL-LAB-ASSIGNMENETS