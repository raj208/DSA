class Solution {
public:

    int mini(vector<vector<int>>&matrix) 
    {
        vector<int>v;
        int size = matrix.size();
        for(int i=0;i<size; i++)
        {
            int temp = matrix[0][i];
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        return v[0];
    }

    

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minimun = mini(matrix);
        int index;
        int size = matrix.size();
        //finding index  of first row minimum element
        for(int i=0; i<matrix.size(); i++)
        {
            if(matrix[0][i] == minimum)
            {
                index = i; //storing the index value of first minimum element
            }
        }
        int row = index;
        int col = index;
        for(int i=0; i<size-1; i++)
        {
            int left = matrix[row+1][col -1];
            int middle = matrix[row+1][col];
            int right = matrix[row+1][col+1];
        }


    }
};