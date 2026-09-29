class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>mp;

        //row freq
        for (int i=0;i<9;++i){
            for (int j=0;j<9;++j){
                if (board[i][j] == '.') continue;
                if (mp[board[i][j]]>=1) return false;

                mp[board[i][j]]++;
            }
            mp.clear();
        }

        mp.clear();

        //col freq
        for (int i=0;i<9;++i){
            for (int j=0;j<9;++j){
                if (board[j][i] == '.') continue;
                if (mp[board[j][i]]>=1) return false;

                mp[board[j][i]]++;
            }
            mp.clear();
        }

        mp.clear();

        //square freq
        for (int sq=0;sq<9;++sq){
            for (int i=0;i<3;++i){
                for (int j=0;j<3;++j){
                    int row = (sq/3)*3 + i;
                    int col = (sq%3)*3 + j;

                    if (board[row][col] == '.') continue;
                    if (mp[board[row][col]]>=1) return false;

                    mp[board[row][col]]++;
                }
            }

            mp.clear();
        }

        return true;
    }
};
