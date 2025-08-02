class Solution
{
public:
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        if (source == destination)
            return true;
        vector<vector<int>> graph(n);
        // bidirectional relation setup
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0], v = edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        // to track the nodes that are already visited
        vector<bool> check(n, false);
        check[source] = true;
        queue<int> q;
        q.push(source);

        while (!q.empty())
        {
            int current = q.front();
            q.pop();
            if (current == destination)
                return true;
            for (int i = 0; i < graph[current].size(); ++i)
            {
                int neighbour = graph[current][i];
                if (check[neighbour] != true)
                {
                    check[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
        return false;
    }
};