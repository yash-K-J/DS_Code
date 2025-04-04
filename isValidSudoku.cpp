class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row,column,box;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char temp=board[i][j];
                if(board[i][j]=='.')
                    continue;
                if(row[i].count(temp) || column[j].count(temp) || box[(i/3)*3+j/3].count(temp))
                    return false;
                row[i].insert(temp);
                column[j].insert(temp);
                box[(i/3)*3+j/3].insert(temp);
            }
        }
        return true;
    }
};
