#include <bits/stdc++.h>

void SetZero(vector<vector<int>>& matrix, vector<vector<int>>& visited,int i , int j,  int row , int col){
    for(int k = 0 ; k < col ; k++){
        visited[i][k]  = 0 ;
    }
    for(int l = 0 ; l < row ; l++){
        visited[l][j] = 0 ; 
    }
}
void setZeros(vector<vector<int>> &matrix)
{
	int row=matrix.size() ; 
        int col = matrix[0].size();
        vector<vector<int>> visited = matrix ;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j] == 0){
                    SetZero(matrix,visited,i,j,row,col);
                }
            }
        }

        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col; j++){
                matrix[i][j] = visited[i][j];
            }
        }
}