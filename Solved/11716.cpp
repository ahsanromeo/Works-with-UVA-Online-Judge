#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, k, l, t, s;
    char in[10001];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(in);
        l=strlen(in);
        s=sqrt(l);
        if(l!=(s*s))
        {
            printf("INVALID\n");
            continue;
        }
        for(i=0;i<s;i++)
            for(j=i;j<l;j+=s)
                printf("%c",in[j]);
        printf("\n");
    }
}
