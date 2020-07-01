#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int l = strlen(s);
    for(int i=0; i<l; i++)
        printf("x");
    printf("\n");

    return 0;
}
