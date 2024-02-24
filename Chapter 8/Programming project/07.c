#include <stdio.h>
#include <ctype.h>

int main(void){
	int table_read[5][5], row_sum[5] = {0}, column_sum[5] = {0}, i, j;
    
    for (i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &table_read[i][0], &table_read[i][1], &table_read[i][2], &table_read[i][3], &table_read[i][4]);
    }
    
    printf("Row totals:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            row_sum[i] += table_read[i][j];
            column_sum[i] += table_read[j][i];
        }
        printf(" %d", row_sum[i]);
    }
    printf("\nColumn totals:");
    for (i = 0; i < 5; i++) printf(" %d", column_sum[i]);
    
	return 0;
}
