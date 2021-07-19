class Solution {
public:
   
    void fun(vector<vector<int>>& image, int sr, int sc, int newColor,int ele)
{if(sr<0||sc<0)
 return;
 if(sr>=image.size()||sc>=image[0].size())
 return;
 if(image[sr][sc]!=ele)
return;
 if(image[sr][sc]==newColor)
 return;

     image[sr][sc]=newColor;
        fun(image,sr+1,sc,newColor,ele);
        fun(image,sr-1,sc,newColor,ele);
        fun(image,sr,sc+1,newColor,ele);
        fun(image,sr,sc-1,newColor,ele);
        return;
   
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int ele=image[sr][sc];
        fun(image,sr,sc,newColor,ele);
        return image;
   
    }
};