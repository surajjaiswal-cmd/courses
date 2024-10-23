#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// 1. bfs(breadth-frist search) traversal in graph.
// 2. dfs(depth-frist search) traversal in graph.
// 3. detect loop prenset or not by dfs traversal in graph.
// 4. detect loop prenset or not by bfs traversal in graph.
// 5. detect loop prenset or not by dfs traversal in directed graph.
// 6. detect loop prenset or not by bfs traversal in directed graph.
//==================================================================================================
// 1. bfs(breadth-frist search) traversal in graph.
// void bsftraversal(int vr, vector<int> adj[])
// {
//     queue<int> q;
//     q.push(0);
//     vector<bool> visited(vr, 0);
//     visited[0] = 1;

//     vector<int> ans;
//     int node;
//     while (!q.empty())
//     {
//         node = q.front();
//         q.pop();
//         ans.push_back(node);
//          cout << node << " ";
//         for (int i = 0; i < adj[node].size(); i++)
//         {
//             if (!visited[adj[node][i]])
//             {
//                 visited[adj[node][i]] = 1;
//                 q.push(adj[node][i]);
//             }
//         }
//     }
// }
// int main()
// {
//     int vr, e;
//     cout << "enter number of vertices = ";
//     cin >> vr;
//     cout << "enter number of edges = ";
//     cin >> e;
//     vector<int> adj[vr];
//     int u, v;
//     cout << "enter the edges one by one \n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         cout << i << " -> ";
//         if (!adj[i].empty())
//         {
//             for (int j = 0; j < adj[i].size(); j++)
//                 cout << adj[i][j] << " ";
//         }
//         else
//             cout << "No neighbors";
//         cout << endl;
//     }

// // cout << "bsf travesal \n";
// // bsftraversal(vr, adj);

//     return 0;
// }

// //=============================================================================================================
// // 2. dfs(depth-frist search) traversal in graph.
// void dfs(int node, vector<int> adj[], vector<int> &ans, vector<bool> &visited)
// {
//     ans.push_back(node);
//     visited[node] = 1;
//     for (int i = 0; i < adj[node].size(); i++)
//     {
//         int neighbors = adj[node][i];
//         if (!visited[neighbors])
//             dfs(neighbors, adj, ans, visited);
//     }
// }

// int main()
// {
//     int vr;
//     cout << "enter the number of vertex = ";
//     cin >> vr;
//     int e;
//     cout << "enter the number of edges = ";
//     cin >> e;
//     vector<int> adjlist[vr];
//     int u, v;
//     cout << "enter edges one by one\n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         adjlist[u].push_back(v);
//         adjlist[v].push_back(u);
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         cout << i << " -> ";
//         if (!adjlist[i].empty())
//         {
//             for (int j = 0; j < adjlist[i].size(); j++)
//                 cout << adjlist[i][j] << " ";
//         }
//         else
//             cout << "No neighbors";
//         cout << endl;
//     }
//     vector<int> ans;
//     vector<bool> visited(vr, 0);
//     dfs(0, adjlist, ans, visited);
//     cout << "DFS traversal \n";
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }
//=============================================================================================================
// 3. detect loop prenset or not by dfs traversal in graph.
bool isloop(int node, int parent, vector<int> adj[], vector<bool> &visited)
{

    visited[node] = 1;
    for (int i = 0; i < adj[node].size(); i++)
    {
        int neighbors = adj[node][i];
        if (neighbors == parent)
            continue;
        if (visited[neighbors])
            return 1;
        if (isloop(neighbors, node, adj, visited))
            return 1;
    }
    return 0;
}

int main()
{
    int vr;
    cout << "enter the number of vertex = ";
    cin >> vr;
    int e;
    cout << "enter the number of edges = ";
    cin >> e;
    vector<int> adjlist[vr];
    int u, v;
    cout << "enter edges one by one\n";
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        // add condition to chake input is currect or not
        if (u >= 0 && u < vr && v >= 0 && v < vr)
        {
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        else
            cout << "wrong input : plese enter small number then vertices";
    }
    for (int i = 0; i < vr; i++)
    {
        cout << i << " -> ";
        if (!adjlist[i].empty())
        {
            for (int j = 0; j < adjlist[i].size(); j++)
                cout << adjlist[i][j] << " ";
        }
        else
            cout << "No neighbors";
        cout << endl;
    }
    vector<bool> visited(vr, 0);
    bool ans = 0;
    for (int i = 0; i < vr; i++)
    {
        if (!visited[i] && isloop(i, -1, adjlist, visited))
        {
            // if cycle detect then make answer 1 and breck loop
            ans = 1;
            break;
        }
    }

    if (!ans)
        cout << "cycle not detected in graph";
    else
        cout << "cycle detected in graph";

    return 0;
}
//==========================================================================================================
// 4. detect loop prenset or not by bfs traversal in graph.
// bool isloop(vector<int> adj[], vector<bool> &visited)
// {
//     queue<pair<int, int>> q;
//     visited[0] = 1;
//     q.push(make_pair(0, -1));
//     while (!q.empty())
//     {
//         int node = q.front().first;
//         int parent = q.front().second;
//         q.pop();

//         for (int i = 0; i < adj[node].size(); i++)
//         {
//             int neighbors = adj[node][i];
//             if (neighbors == parent)
//                 continue;
//             if (visited[neighbors])
//                 return 1;
//             visited[neighbors] = 1;
//             q.push(make_pair(neighbors,node));
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int vr;
//     cout << "enter the number of vertex = ";
//     cin >> vr;
//     int e;
//     cout << "enter the number of edges = ";
//     cin >> e;
//     vector<int> adjlist[vr];
//     int u, v;
//     cout << "enter edges one by one\n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         // add condition to chake input is currect or not
//         if (u >= 0 && u < vr && v >= 0 && v < vr)
//         {
//             adjlist[u].push_back(v);
//             adjlist[v].push_back(u);
//         }
//         else
//             cout << "wrong input : plese enter small number then vertices";
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         cout << i << " -> ";
//         if (!adjlist[i].empty())
//         {
//             for (int j = 0; j < adjlist[i].size(); j++)
//                 cout << adjlist[i][j] << " ";
//         }
//         else
//             cout << "No neighbors";
//         cout << endl;
//     }
//     vector<bool> visited(vr, 0);
//     bool ans = 0;
//     for (int i = 0; i < vr; i++)
//     {
//         if (!visited[i] && isloop(adjlist, visited))
//         {
//             // if cycle detect then make answer 1 and breck loop
//             ans = 1;
//             break;
//         }
//     }

//     if (!ans)
//         cout << "cycle not detected in graph";
//     else
//         cout << "cycle detected in graph";

//     return 0;
// }
//=============================================================================================================
// 5. detect loop prenset or not by dfs traversal in directed graph.
// bool isloop(int node, vector<int> adj[], vector<bool> &visited, vector<bool> &path)
// {
//     path[node] = 1;
//     visited[node] = 1;
//     for (int i = 0; i < adj[node].size(); i++)
//     {
//         int neighbors = adj[node][i];
//         if (path[neighbors])
//             return 1;
//         // if neighor is already available then skip it
//         else if (!visited[neighbors])
//         {
//             if (isloop(neighbors, adj, visited, path))
//                 return 1;
//         }
//     }
//     path[node] = 0;
//     return 0;
// }

// int main()
// {
//     int vr;
//     cout << "enter the number of vertex = ";
//     cin >> vr;
//     int e;
//     cout << "enter the number of edges = ";
//     cin >> e;
//     vector<int> adjlist[vr];
//     int u, v;
//     cout << "enter edges one by one\n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         // add condition to chake input is currect or not
//         if (u >= 0 && u < vr && v >= 0 && v < vr)
//         {
//             adjlist[u].push_back(v);
//         }
//         else
//             cout << "wrong input : plese enter small number then vertices";
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         cout << i << " -> ";
//         if (!adjlist[i].empty())
//         {
//             for (int j = 0; j < adjlist[i].size(); j++)
//                 cout << adjlist[i][j] << " ";
//         }
//         else
//             cout << "No neighbors";
//         cout << endl;
//     }
//     vector<bool> path(vr, 0);
//     vector<bool> visited(vr, 0);
//     bool ans = 0;
//     for (int i = 0; i < vr; i++)
//     {
//         if (!visited[i] && isloop(i, adjlist, visited, path))
//         {
//             // if cycle detect then make answer 1 and breck loop
//             ans = 1;
//             break;
//         }
//     }

//     if (!ans)
//         cout << "cycle not detected in graph";
//     else
//         cout << "cycle detected in graph";

//     return 0;
// }
// time  complexity = o(v+e)
// space complexity = 0(v)
//=============================================================================================================
// 6. detect loop prenset or not by bfs traversal in directed graph.
// bool isloop(int node, vector<int> adj[], vector<bool> &visited, vector<bool> &path)
// {
//     path[node] = 1;
//     visited[node] = 1;
//     for (int i = 0; i < adj[node].size(); i++)
//     {
//         int neighbors = adj[node][i];
//         if (path[neighbors])
//             return 1;
//         // if neighor is already available then skip it
//         else if (!visited[neighbors])
//         {
//             if (isloop(neighbors, adj, visited, path))
//                 return 1;
//         }
//     }
//     path[node] = 0;
//     return 0;
// }

// int main()
// {
//     int vr;
//     cout << "enter the number of vertex = ";
//     cin >> vr;
//     int e;
//     cout << "enter the number of edges = ";
//     cin >> e;
//     vector<int> adjlist[vr];
//     int u, v;
//     cout << "enter edges one by one\n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         // add condition to chake input is currect or not
//         if (u >= 0 && u < vr && v >= 0 && v < vr)
//         {
//             adjlist[u].push_back(v);
//         }
//         else
//             cout << "wrong input : plese enter small number then vertices";
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         cout << i << " -> ";
//         if (!adjlist[i].empty())
//         {
//             for (int j = 0; j < adjlist[i].size(); j++)
//                 cout << adjlist[i][j] << " ";
//         }
//         else
//             cout << "No neighbors";
//         cout << endl;
//     }
//     vector<bool> path(vr, 0);
//     vector<bool> visited(vr, 0);
//     bool ans = 0;
//     for (int i = 0; i < vr; i++)
//     {
//         if (!visited[i] && isloop(i, adjlist, visited, path))
//         {
//             // if cycle detect then make answer 1 and breck loop
//             ans = 1;
//             break;
//         }
//     }

//     if (!ans)
//         cout << "cycle not detected in graph";
//     else
//         cout << "cycle detected in graph";

//     return 0;
// }
// // time  complexity = o(v+e)
// // space complexity = 0(v)