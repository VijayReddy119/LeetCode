#include<iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        
        fillImage(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
    void fillImage(vector<vector<int>>& image, int sr, int sc, int color, int newColor){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[sr].size() || image[sr][sc]!=color)
            return ;
        
        image[sr][sc] = newColor;
        fillImage(image, sr+1, sc, color, newColor);
        fillImage(image, sr, sc+1, color, newColor);
        fillImage(image, sr-1, sc, color, newColor);
        fillImage(image, sr, sc-1, color, newColor);
    }
};