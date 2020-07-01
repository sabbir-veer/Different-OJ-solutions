#include<stdio.h>

int main()
{
    int t, base, block;
    scanf("%d", &t);

    while(t--)
    {
        block = 0;
        scanf("%d", &base);
        while(base>2)
        {
            block = block + (base-2)/2;
            base = base-2;
        }
        printf("%d\n", block);
    }

    return 0;
}
