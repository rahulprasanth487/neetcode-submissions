class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking row
        unordered_map<char,int> freq;

        for (int i=0; i< 9; i++)
        {
            for (int j=0;j<9;++j){
                if ((board[i][j] != '.')){
                    cout<<freq[board[i][j]]<<board[i][j]<<"\n";
                    if (freq[board[i][j]]>0) return false;
                    freq[board[i][j]]++;
                }
            }
            freq.clear();
        }

        freq.clear();


        for (int i=0; i< 9; i++)
        {
            for (int j=0;j<9;++j){
                if ((board[j][i] != '.')){
                    if (freq[board[j][i]]>0) return false;
                    freq[board[j][i]]++;
                }
            }
            freq.clear();
        }

        freq.clear();


        for (int sq=0;sq<9;++sq){
            for (int i=0;i<3;++i){
                for (int j=0; j<3; ++j){
                        int row=i+(sq/3)*3;
                        int col=j+(sq%3)*3;
                        if ((board[row][col] != '.')){
                            if (freq[board[row][col]]>0) return false;
                            freq[board[row][col]]++;
                    }
                }
            }
            freq.clear();
        }

        return true;
    }
};
