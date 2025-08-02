class Solution
{
public:
    int m, n;

    void adj(vector<vector<char>> &board, int i, int j)
    {
        m = board.size(), n = board[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != 'O')
            return;
        board[i][j] = '*';
        adj(board, i - 1, j);
        adj(board, i + 1, j);
        adj(board, i, j - 1);
        adj(board, i, j + 1);
    }
    void solve(vector<vector<char>> &board)
    {
        // in every case the first and last rows & first and last columns are returned as it is
        //*-safe
        // O-not safe
        m = board.size();
        n = board[0].size();
        if (m == 1 && n == 1)
            return;
        for (int i = 0; i < m; i++)
        {
            if (board[i][0] == 'O')
            {
                adj(board, i, 0);
            }
            if (board[i][n - 1] == 'O')
            {
                adj(board, i, n - 1);
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (board[0][j] == 'O')
            {
                adj(board, 0, j);
            }
            if (board[m - 1][j] == 'O')
            {
                adj(board, m - 1, j);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                if (board[i][j] == '*')
                    board[i][j] = 'O';
            }
        }
    }
};