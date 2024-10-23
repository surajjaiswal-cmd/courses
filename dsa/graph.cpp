#include <iostream>
#include <vector>
using namespace std;
// 1. implemantion of undirected and unweited graph by adjacency matrix.
// 2. implemantion of undirected and weited graph  by adjancecy mettrix.
// 3. implemantion of directed and weited graph by adjacency matrix.
// 4. implemantion of undirected and unweited graph by adjacency list.
// 5. implemantion of undirected and weited graph by adjacency list.
// 6. implemantion of directed and weited graph by adjacency list.
//===========================================================================================================
// 1. implemantion of undirected and unweited graph by adjacency matrix.
// int main()
// {
//     int vr, e;
//     cout << "enter number of vertices = ";
//     cin >> vr;
//     cout << "enter number of edges = ";
//     cin >> e;
//     vector<vector<bool>> adj(vr, vector<bool>(vr, 0));
//     int u, v;
//     cout << "enter the edges one by one \n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         adj[u][v] = 1;
//         adj[v][u] = 1;
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         for (int j = 0; j < vr; j++)
//         {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// time complexity = O(v2)
// space complexity = o(v2)
//==========================================================================================
// 2. implemantion of undirected and weited graph by adjacency matrix.
// int main()
// {
//     int vr, e;
//     cout << "enter number of vertices = ";
//     cin >> vr;
//     cout << "enter number of edges = ";
//     cin >> e;
//      // to chang into weighted graph frist change bool to int
//     vector<vector<int>> adj(vr, vector<int>(vr, 0));
//     int u, v, weight;
//     cout << "enter the edges and weight one by one \n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         cout << " = ";
//         cin >> weight;
//         adj[u][v] = weight;// change bool to weight to show how much weight
//         adj[v][u] = weight;
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         for (int j = 0; j < vr; j++)
//         {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// time complexity = O(v2)
// space complexity = o(v2)
//==========================================================================================
// 3. implemantion of directed and weited graph by adjacency matrix.
// int main()
// {
//     int vr, e;
//     cout << "enter number of vertices = ";
//     cin >> vr;
//     cout << "enter number of edges = ";
//     cin >> e;
//      // to chang into weighted graph frist change bool to int
//     vector<vector<int>> adj(vr, vector<int>(vr, 0));
//     int u, v, weight;
//     cout << "enter the edges and weight one by one \n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         cout << " = ";
//         cin >> weight;
//         adj[u][v] = weight;// change bool to weight to show how much weight
//        // remove on direction to chang in directed waited graph
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         for (int j = 0; j < vr; j++)
//         {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// time complexity = O(v2)
// space complexity = o(v2)
//=============================================================================================================
// 4. implemantion of undirected and unweited graph by adjacency list.
// int main()
// {
//     int vr, e;
//     cout << "enter number of vertices = ";
//     cin >> vr;
//     cout << "enter number of edges = ";
//     cin >> e;
//    vector<int> adj[vr];
//     int u, v;
//     cout << "enter the edges one by one \n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     for (int i = 0; i < vr; i++)
//     { cout<<i<<" -> ";
//         for (int j = 0; j < adj[i].size(); j++)
//         {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// time complexity = 0(v+e)
// space complexity = 0(v+e)
//=============================================================================================================
// 5. implemantion of undirected and weited graph by adjacency list.
// int main()
// {
//     int vr, e;
//     cout << "enter number of vertices = ";
//     cin >> vr;
//     cout << "enter number of edges = ";
//     cin >> to change in weight graph we need to make pair in vector to show weight in edges.
//     vector<pair<int, int>> adj[vr];
//     int u, v, weight;
//     cout << "enter the edges and weight one by one \n";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> u >> v;
//         cout << "weight = ";
//         cin >> weight;
//         adj[u].push_back(make_pair(v, weight));
//         adj[v].push_back(make_pair(u, weight));
//     }
//     for (int i = 0; i < vr; i++)
//     {
//         cout << i << " -> ";
//         for (int j = 0; j < adj[i].size(); j++)
//         {
//             cout << "(" << adj[i][j].first << "-" << adj[i][j].second << ")" << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// time complexity = 0(v+e)
// space complexity = 0(v+e)
//=============================================================================================================
// 6. implemantion of directed and weited graph by adjacency list.
int main()
{
    int vr, e;
    cout << "enter number of vertices = ";
    cin >> vr;
    cout << "enter number of edges = ";
    cin >> e;
    vector<pair<int, int>> adj[vr];
    int u, v, weight;
    cout << "enter the edges and weight one by one \n";
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        cout << "weight = ";
        cin >> weight;
        adj[u].push_back(make_pair(v, weight));
    }
    for (int i = 0; i < vr; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << "(" << adj[i][j].first << "-" << adj[i][j].second << ")" << " ";
        }
        cout << endl;
    }

    return 0;
}
// time complexity = 0(v+e)
// space complexity = 0(v+e)