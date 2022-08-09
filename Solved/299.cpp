#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int l;
        scanf("%d", &l);
        int i, train[l];
        for(i=0;i<l;i++)
            scanf("%d", &train[i]);
        int j, c=0;
        for(i=0;i<l;i++)
            for(j=i+1;j<l;j++)
            {
                if(train[i]>train[j])
                {
                    int t=train[j];
                    train[j]=train[i];
                    train[i]=t;
                    c++;
                }
            }
        printf("Optimal train swapping takes %d swaps.\n", c);
    }
}
