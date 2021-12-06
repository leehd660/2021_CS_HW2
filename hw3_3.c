#include <stdio.h>
#define SIZE 4

int printvalue(int matrix[SIZE][SIZE]){
        for(int i=0; i<SIZE; i++){
                for (int j=0; j<SIZE; j++){
                        printf(" %2d ",matrix[i][j]);
                }
                printf("\n");
        }
        return 0;
}

int main(){
        int matrix[SIZE][SIZE]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

        printf("<get original matrix>\n");
        printvalue(matrix);

        int transposed[SIZE][SIZE];
        for(int i=0; i<SIZE; i++){
                for (int j=0; j<SIZE; j++){
                        transposed[j][i] = matrix[i][j];
                }
        }

        printf("<get transposed matrix>\n");
        printvalue(transposed);

        int addition[SIZE][SIZE];
        for(int i=0; i<SIZE; i++){
                for(int j=0; j<SIZE; j++){
                        addition[i][j] = matrix[i][j] + transposed[i][j];
                }
        }
        printf("<get added matrix>\n");
        printvalue(addition);

        return 0;
}
