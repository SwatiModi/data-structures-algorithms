class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> res;

        int rs = 0, cs = 0;
        int re = matrix.size();
        int ce = matrix[0].size();

        while (rs < re && cs < ce)
        {

            for (int i = cs; i < ce; i++)
                res.push_back(matrix[rs][i]);
            rs++;

            for (int i = rs; i < re; i++)
                res.push_back(matrix[i][ce - 1]);
            ce--;

            if (rs < re)
            {
                for (int i = ce - 1; i >= cs; --i)
                    res.push_back(matrix[re - 1][i]);
                re--;
            }

            if (cs < ce)
            {
                for (int i = re - 1; i >= rs; --i)
                    res.push_back(matrix[i][cs]);
                cs++;
            }
        }

        return res;
    }
};
