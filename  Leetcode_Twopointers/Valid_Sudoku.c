class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_set<char> row[9];
        std::unordered_set<char> col[9];
        std::unordered_set<char> boxes[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char curr = board[i][j];
                if(curr=='.'){
                    continue;
                }
                int box_indx = (i/3)*3 + (j/3);
                if(!row[i].insert(curr).second || !col[j].insert(curr).second || !boxes[box_indx].insert(curr).second){
                    return false;
                }
            }
        }
        return true;
    }
};