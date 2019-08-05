void transpose(int transpose_matrix[][], 
                         int matrix[][],int row, int col) 
{ 
   for (int i = 0; i < row; i++) 
      for (int j = 0; j < col; j++) 
         transpose_matrix[j][i] = matrix[i][j]; 
} 

// Utility function to check anti-symmetric 
// matrix condition 
void check(int transpose_matrix[][], 
                    int matrix[][],int row, int col) 
{ 
int check=0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) 
            if (matrix[i][j] != -transpose_matrix[i][j]) {
                check=1;
				break; }}
    if(check==1){
    	printf("not anti-symmetric");
	}
	else
	printf("anti symmetric");
                
    
} 
// Utility function to check symmetric 
// matrix condition
void check(int transpose_matrix[][], 
                    int matrix[][],int row, int col) 
{ 
int check=0;
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++){ 
            if (matrix[i][j] != transpose_matrix[i][j]) {
            check=1;
            break;}
} 
