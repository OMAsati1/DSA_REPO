#include <iostream>
#include <utility>
#include <vector>
#include <unordered_map>
#include <list>
#include <algorithm>
using namespace std;

void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int> &low,
         vector<int> &ap, unordered_map<int, list<int>> &adj,
         unordered_map<int, bool> &vis)
{
    vis[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;
    for (auto nbr : adj[node])
    {
        if (nbr == parent)
        {
            continue;
        }
        if (!vis[nbr])
        {
            dfs(nbr, node, timer, disc, low, ap, adj, vis);
            low[node] = min(low[node], low[nbr]);
            // check edge is bridge or not
            if (low[nbr] > disc[node] && parent != -1)
            {
                ap[node] = 1;
            }
            child++;
        }
        else
        {
            low[node] = min(low[node], disc[nbr]);
        }
    }
    if (parent == -1 && child > 1)
    {
        ap[node] = 1;
    }
}

int main()
{
    int n = 5;
    int e = 5;
    vector<pair<int, int>> edges;
    edges.push_back({0, 3});
    edges.push_back({3, 4});
    edges.push_back({0, 4});
    edges.push_back({0, 1});
    edges.push_back({1, 2});

    // adj list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int timer = 0;
    vector<int> disc(n, -1);
    vector<int> low(n, -1);

    int parent = -1;
    unordered_map<int, bool> vis;
    vector<int> ap(n, 0);
    // dfs
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, parent, timer, disc, low, ap, adj, vis);
        }
    }
    // print ap
    cout << "Articulation Points are as follows" << endl;
    for (int i = 0; i < n; i++)
    {
        if (ap[i] != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}