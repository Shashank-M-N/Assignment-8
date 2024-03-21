#include<stdio.h>

int main()
{
    int nums[100],l,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&l);
    printf("Enter the array:\n");
    for(int i=0;i<l;i++)
        scanf("%d",nums+i);
    for(int i=0;i<l;i++)
        sum+=*(nums+i);
    printf("The repeated element is: %d",sum-(l*(l-1))/2);
    return 0;
}