#include <stdio.h>
int main()
{
        int A[3][3], B[3][3], C[3][3], i, j, k, sum;
        printf("Enter the values of First Matrix ");
        for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                        scanf("%d", &A[i][j]);

        printf("Enter the values of Second Matrix ");
        for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                        scanf("%d", &B[i][j]);

        printf("Multiplication of Matrices will be \n");
        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        sum = 0;
                        for (k = 0; k < 3; k++)
                                sum = sum + A[i][k] * B[k][j];
                        C[i][j] = sum;
                }
        }
        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 3; j++)
                        printf("%d ", C[i][j]);
                printf("\n");
        }
        return 0;
}