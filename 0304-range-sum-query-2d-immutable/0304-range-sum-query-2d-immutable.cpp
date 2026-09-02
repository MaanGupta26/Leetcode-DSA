class NumMatrix {
private: 
    vector<vector<int>> pfix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        pfix = matrix;
        
        int n=matrix.size();
        int m=matrix[0].size();

        for (int i=0;i<n;i++){
            for (int j=1; j<m;j++){
                pfix[i][j] += pfix[i][j-1];


            }
        }
        for (int j=0;j<m;j++){
            for (int i=1; i<n;i++){
                pfix[i][j] += pfix[i-1][j];
            }
        }


    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = pfix[row2][col2];
        if (row1>0) {
            sum = sum - pfix[row1-1][col2];

        }
        if (col1>0){
            sum = sum- pfix[row2][col1-1];
        }
        if (col1 && row1>0) {
            sum = sum+ pfix[row1-1][col1-1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */