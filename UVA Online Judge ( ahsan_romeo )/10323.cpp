#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
        {
            if(n%2==0) printf("Underflow!\n");
            else printf("Overflow!\n");
        }
        else if(n==0||n<=7) printf("Underflow!\n");
        else if(n==8) printf("40320\n");
        else if(n==9) printf("362880\n");
        else if(n==10) printf("3628800\n");
        else if(n==11) printf("39916800\n");
        else if(n==12) printf("479001600\n");
        else if(n==13) printf("627020800\n");
        else printf("Overflow!\n");
    }
}
