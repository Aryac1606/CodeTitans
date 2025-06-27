class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int zero = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    zero++;
                };
            };
        };
        int indx = 0;
        vector<vector<int>> temp(zero, vector<int>(2));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    vector<int> sub(2);
                    sub[0] = i;
                    sub[1] = j;
                    temp[indx] = sub;
                    indx++;
                }
            }
        }
        // temp array se row and column that is to be made zero is traced
        for (int i = 0; i < zero; i++)
        {
            for (int a = 0; a < n; a++)
            {
                matrix[temp[i][0]][a] = 0;
            }
            for (int b = 0; b < m; b++)
            {
                matrix[b][temp[i][1]] = 0;
            }
        }
    };
};