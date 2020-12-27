class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> tri;
        tri.resize(numRows);

        if (numRows == 0)
            return tri;
        if (numRows >= 1)
            tri[0].push_back(1);
        if (numRows >= 2)
            tri[1] = {1, 1};
        for (int y = 2; y < numRows; y++)
        {
            for (int z = 0; z <= y; z++)
                if (z == 0 || z == y)
                    tri[y].push_back(1);
                else
                    tri[y].push_back(tri[y - 1][z] + tri[y - 1][z - 1]);
        }
        return tri;
    }
};