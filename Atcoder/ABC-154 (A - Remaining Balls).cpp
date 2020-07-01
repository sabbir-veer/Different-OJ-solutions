#include<stdio.h>
#include<string.h>
int main()
{
    char s[11], t[11], u[11];
    int a, b;

    scanf("%s %s %d %d %s", s, t, &a, &b, u);
    if(strcmp(s,u)==0)
        a--;
    else b--;
    printf("%d %d\n", a, b);
    return 0;
}
