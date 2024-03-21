#include <stdio.h>

void reverse(int l, int a[])
{
    for(int i=0;i<l/2;i++) {
        *(a+i)+=*(a+l-1-i);
        *(a+l-1-i)=*(a+i)-*(a+l-1-i);
        *(a+i)-=*(a+l-1-i);
    }
    printf("\nThe reversed array:\n");
    for(int i=0;i<l;i++)
        printf("%d\t",*(a+i));   
}

int main()
{
    int arr[10], l;
    printf("Enter the size of array: ");
    scanf("%d", &l);
    printf("Enter the array elemets: ");
    for (int i = 0; i < l; i++)
        scanf("%d",arr+i);
    printf("The current array:\n");
    for(int i=0;i<l;i++)
        printf("%d\t",*(arr+i));
    reverse(l, arr);
    return 0;
}