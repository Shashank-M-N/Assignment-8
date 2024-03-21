#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int len1, len2;
    char *str1, *str2, *result;

    printf("Enter the length of the first string: ");
    scanf("%d", &len1);
    str1 = (char *)malloc((len1 + 1) * sizeof(char));
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the length of the second string: ");
    scanf("%d", &len2);
    str2 = (char *)malloc((len2 + 1) * sizeof(char));
    printf("Enter the second string: ");
    scanf("%s", str2);
    result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    sprintf(result, "%s%s", str1, str2);
    printf("The result is: %s\n", result);
    free(str1);
    free(str2);
    free(result);
    return 0;
}
