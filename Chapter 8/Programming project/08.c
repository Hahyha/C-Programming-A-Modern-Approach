#include <stdio.h>
#include <ctype.h>

int main(void){
	int table_read[5][5], row_sum[5] = {0}, column_sum[5] = {0};
	int i, j, high_score[5], low_score[5];
    
    for (i = 0; i < 5; i++) {
        printf("Enter the grades of student %d: ", i + 1);
        scanf("%d %d %d %d %d", &table_read[i][0], &table_read[i][1], &table_read[i][2], &table_read[i][3], &table_read[i][4]);
        high_score[i] = table_read[0][i];
        low_score[i] = table_read[0][i];
    }
    
    printf("Total grades for each student are:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            row_sum[i] += table_read[i][j];
            column_sum[i] += table_read[j][i];
            high_score[i] = (high_score[i] > table_read[j][i]) ? high_score[i] : table_read[j][i];
            low_score[i] = (low_score[i] > table_read[j][i]) ? table_read[j][i] : low_score[i];
        }
        printf(" %d", row_sum[i]);
    }
    printf("\nAverage grades for each student are:");
    for (i = 0; i < 5; i++) printf(" %.1lf", (double) row_sum[i] / 5);
    printf("\nAverage grades for each quiz are:");
    for (i = 0; i < 5; i++) printf(" %.1lf", (double) column_sum[i] / 5);
    printf("\nHighest grades for each quiz are:");
    for (i = 0; i < 5; i++) printf(" %d", high_score[i]);
    printf("\nLowest grades for each quiz are:");
    for (i = 0; i < 5; i++) printf(" %d", low_score[i]);
    
	return 0;
}
