class Solution {
public:
    void dfs(vector<vector<int>>& image,int color ,int i, int j, int newColor)
    {
        if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]==newColor||image[i][j]!=color)
            return;
        image[i][j]=newColor;
        dfs(image,color,i+1,j,newColor);
        dfs(image,color,i-1,j,newColor);
        dfs(image,color,i,j+1,newColor);
        dfs(image,color,i,j-1,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        dfs(image,color,sr,sc,newColor);
        return image;
    }
};