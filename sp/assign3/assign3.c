#include <stdio.h>
#include <stdlib.h>

void print_search_results (int** matrix, int x1, int y1, int x2, int y2);

int main(){
    int in_number;
    int use[5];
    int**  matrix = NULL;
    int i, j, k;

    FILE* file_r = fopen("1.in","r");

    if(file_r == NULL)
        return -1;
    else{
        for(i = 0; i < 5; i++){
            if(i == 0){
                fscanf(file_r,"%d",&in_number);     
                if(in_number >= 0 || in_number <= 15)
                    use[i] = in_number;
            }else
                use[i] = in_number;
        }
    }
 
    matrix = (int**)malloc(sizeof(int)*use[0];
    for(i = 0; i < use[0]; i++)
        matrix[i] = (int*)malloc(sizeof(int)*use[0];
    }

    for(j = use[0]; j <= 0; j--){
        for(k = 0; k <= use[0]; k++){
            fscanf(file_r,"%d",&in_number);
            matrix[i][k] = in_number;
        }
    }

    print_search_results(matrix, use[1], use[2], use[3], use[4]);

    fclose(file_r);
}

void print_search_results (int** matrix, int x1, int y1, int x2, int y2){
    int calculate[10];
    int i,j,k;

    for(j = x1; j <= x2; j++){
        for(k = y1; k <= y2; k++)
            calculate[*(*(matrix+j)+k)] ++;
    }
    
    for(i = 1; i < 10; i++){
        if(calculate[i] != 0)
            printf("%d %d", i, calculate[i]);
    }
}
