#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
   float a, k;
   int i, t, n, m, sum;
   cin>>t;
   while(t--)
   {
       cin>>n;
       k=0;
       sum=0;
       int marks[n];
       for(i=1;i<=n;i++)
       {
           cin>>m;
           marks[i-1]=m;
           sum+=m;
       }
       a=sum/(n*1.0);
       for(i=0;i<=n-1;i++)
       {
           if(marks[i]>a)
           {
               k++;
           }
       }
       printf("%0.3f", 100*k/n);
       cout<<"%"<<endl;
   }
}
