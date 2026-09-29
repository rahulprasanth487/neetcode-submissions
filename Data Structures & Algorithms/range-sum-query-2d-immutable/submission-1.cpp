class NumMatrix {
   public:
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        prefix = vector<vector<int>>(rows+1, vector<int>(cols+1, 0));

        for (int i = 0; i < rows; ++i) {
            int rowSum=0;
            for (int j = 0; j < cols; ++j) {
                rowSum +=matrix[i][j];
                int above = prefix[i][j+1];
                prefix[i+1][j+1] = rowSum+above;
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = 0;

        row1++; col1++; row2++; col2++;

        int bottomR = prefix[row2][col2];
        int topR = prefix[row1-1][col2];
        int bottomL = prefix[row2][col1-1];
        int topL = prefix[row1-1][col1-1];

        return bottomR-bottomL-topR+topL;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */