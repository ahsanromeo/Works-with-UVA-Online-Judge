#include<cstdio>
#include<cstring>
#include<map>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int compare_funtion(const void *a, const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x-*y;
}

int compare_funtio(const void *a, const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *y-*x;
}

int main()
{
   // char s[30];
   int num=0;
    while(scanf("%d",&num)==1&&num!=0)
    {
        int a[30],b[30],c[30],n=0,count=0;
        map<int , int>m;
        printf("Original number was %d\n",num);
         while(num)
           {
                a[n]=num%10;
                b[n++]=num%10;
                num=num/10;
           }

        while(1)
        {
            qsort(a,n,sizeof(int),compare_funtion);
            qsort(b,n,sizeof(int),compare_funtio);
            int k=0,l=0,i,j,d;
            for(i=0;i<n;i++)
            {
                k=k*10+a[i];
                l=l*10+b[i];
            }
            num=l-k;
            printf("%d - %d = %d\n",l,k,num);
            if(m[num]!=0)break;

            m[num]=1;
            count++;
            n=0;
            while(num)
           {
                a[n]=num%10;
                b[n++]=num%10;
                num=num/10;
           }

        }
        printf("Chain length %d\n\n",count+1);
    }
    return 0;
}
