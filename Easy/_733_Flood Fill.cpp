//TODO: https://leetcode.com/problems/flood-fill/description/
/*
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int currentColor = image[sr][sc];
        if(currentColor != color)
        {
            dfs(image, sr, sc, currentColor, color);
        }
        return image;

    }
    void dfs(vector<vector<int>>& image, int i, int j, int currentColor, int color){
        if(i<0 || i>=image.size() || j<0 || j>image[0].size() || image[i][j] != currentColor){
            return;
        }
        image[i][j] = color;
        dfs(image, i+1, j, currentColor, color);
        dfs(image, i-1, j, currentColor, color);
        dfs(image, i, j-1, currentColor, color);
        dfs(image, i, j+1, currentColor, color);
    }
};

*/