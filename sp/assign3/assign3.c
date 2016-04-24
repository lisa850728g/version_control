#include <stdio.h>
#include <stdlib.h>

void print_search_results (int** matrix, int x1, int y1, int x2, int y2);

int main(){
    int in_number;
    int use[5];
    int**  matrix = NULL;
    int i, j, k;

    for(i = 0; i < 5; i++){
        scanf("%d",&in_number);
        if(i == 0){
            if(in_number >= 0 && in_number <= 15)
                use[i] = in_number;
        }else
            use[i] = in_number;
    }
    matrix = (int**)malloc(sizeof(int)*use[0]);
    for(i = 0; i < use[0]; i++)
        matrix[i] = (int*)malloc(sizeof(int)*use[0]);

    for(j = use[0]-1; j >= 0; j--){
        for(k = 0; k < use[0]; k++){
            scanf("%d",&in_number);
            matrix[j][k] = in_number;
        }
    }

    print_search_results(matrix, use[1], use[2], use[3], use[4]);

    return 0;
}

void print_search_results (int** matrix, int x1, int y1, int x2, int y2){
    int calculate[10] = {0};
    int p,q,r;

    r = 0;
    for(p = y1; p <= y2; p++){
        for(q = x1; q <= x2; q++){
            printf("%d",*(*(matrix+p)+q));
            calculate[*(*(matrix+p)+q)] ++;
            r++;
            if(r % 6 == 0)
                printf("\n");
        }
    }
    
    for(r = 1; r < 10; r++){
        if(calculate[r] != 0)
            printf("%d %d\n", r, calculate[r]);
    }
}
