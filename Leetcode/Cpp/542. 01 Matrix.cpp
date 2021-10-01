class Solution {
public:
    vector<vector<int>> dir{{1,0}, {-1,0}, {0,-1}, {0,1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        if(matrix.size() == 0) return matrix;
        queue<vector<int>> q;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 1) {
                    matrix[i][j] = -1;
                }
                else
                    q.push({i, j});
            }
        }
        int level = 1;
        while(!q.empty()) {
            int size = q.size();
            for(int k = 0; k < size; k++) {
                int x = q.front()[0];
                int y = q.front()[1];
                q.pop();
                for(auto d : dir) {
                    int i = d[0] + x;
                    int j = d[1] + y;
                    if(i >= 0 && j >= 0 && i < matrix.size() && j < matrix[0].size() && matrix[i][j] == -1) {
                        matrix[i][j] = level;
                        q.push({i, j});
                    }
                }
            }
            level++;
        }
        return matrix;
    }
};