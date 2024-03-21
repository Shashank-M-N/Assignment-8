#include<stdio.h>

void matrix_multiply(int a[][10], int b[][10], int m, int n, int y) {
    int c[10][10];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < y; j++) {
            *(*(c+i)+j) = 0;
            for (int k = 0; k < n; k++) {
                *(*(c+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
            }
        }
    }
    printf("The multiplication of the matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < y; j++)
            printf("\t%d", *(*(c+i)+j));
        printf("\n");
    }
}

int main()
{
    int a[10][10],b[10][10],m,n,x,y;
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d",&m,&n);
    printf("Enter the first matrix:\n");
    for(int i=0;i<m;i++) {
        printf("Enter elements in %d row:\n",i+1);
        for(int j=0;j<n;j++)
            scanf("%d",(*(a+i)+j));
    }
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d",&x,&y);
    printf("Enter the second matrix:\n");
    for(int i=0;i<x;i++) {
        printf("Enter elements in %d row:\n",i+1);
        for(int j=0;j<y;j++)
            scanf("%d",(*(b+i)+j));
    }
    if(n!=x)
        printf("Can't multiply.");
    else {
        printf("The first matrix is:\n");
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++)
                printf("\t%d",*(*(a+i)+j));
            printf("\n");
        }
        printf("The second matrix is:\n");
        for(int i=0;i<x;i++) {
            for(int j=0;j<y;j++)
                printf("\t%d",*(*(b+i)+j));
            printf("\n");
        }
        matrix_multiply(a,b,m,n,y);
    }
    return 0;
}