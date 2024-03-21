#include<stdio.h>

void rotate_matrix(int a,int b,int n,int mat[][10]) {
    printf("matrix after rotation of %d times\n",n); 
    while((n--)%4) {
    for(int i=1;i<((a>b)?a:b);i++)
        for(int j=0;j<i/2+1;j++) {
            *(*(mat+i)+j)+=*(*(mat+j)+i);
            *(*(mat+j)+i)=*(*(mat+i)+j)-*(*(mat+j)+i);
            *(*(mat+i)+j)-=*(*(mat+j)+i);
        }
    for(int i=0;i<b/2;i++)
        for(int j=0;j<a;j++) {
            *(*(mat+i)+j)+=*(*(mat+a-1-i)+j);
            *(*(mat+a-1-i)+j)=*(*(mat+i)+j)-*(*(mat+a-1-i)+j);
            *(*(mat+i)+j)-=*(*(mat+a-1-i)+j);
            }
    } 
    for(int i=0;i<b;i++) {
        for(int j=0;j<a;j++)
            printf("\t%d",*(*(mat+i)+j));
        printf("\n");
        }
}

int main()
{
    int mat[10][10],a,b,n;
    printf("Enter the dimensions of the matrix (rows columns): ");
    scanf("%d %d",&a,&b);
    printf("Enter the matrix elements:\n");
    for(int i=0;i<a;i++) {
        printf("Enter elements in %d row:\n",i+1);
        for(int j=0;j<b;j++)
            scanf("%d",(*(mat+i)+j));
    }
    printf("Enter the number of times to rotate: ");
    scanf("%d",&n);
    printf("The original matrix is:\n");
        for(int i=0;i<a;i++) {
            for(int j=0;j<b;j++)
                printf("\t%d",*(*(mat+i)+j));
            printf("\n");
        }
    rotate_matrix(a,b,n,mat);
    return 0;
}