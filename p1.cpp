void transpose(int transpose_matrix[][], 
                         int matrix[][],int row, int col) 
{ 
   for (int i = 0; i < row; i++) 
      for (int j = 0; j < col; j++) 
         transpose_matrix[j][i] = matrix[i][j]; 
} 
  
// Utility function to check anti-symmetric 
// matrix condition 
bool check(int transpose_matrix[][], 
                    int matrix[][],int row, int col) 
{ 
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++) 
            if (matrix[i][j] != -transpose_matrix[i][j]) 
                return false; 
    return true; 
} 
// Utility function to check symmetric 
// matrix condition
bool check(int transpose_matrix[][], 
                    int matrix[][],int row, int col) 
{ 
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++) 
            if (matrix[i][j] != transpose_matrix[i][j]) 
                return false; 
    return true; 
} 

