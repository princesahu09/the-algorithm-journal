    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j] = col_max[i];
            }
        }
    }
    return matrix; 