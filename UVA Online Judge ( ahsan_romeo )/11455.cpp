#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    long long int a, b, c, d, bah[4], temp;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        if(a==b&&b==c&&c==d) cout<<"square"<<endl;
        else if(a+b+c<=d||b+c+d<=a||a+c+d<=b||a+b+d<=c) cout<<"banana"<<endl;
        else
        {
            bah[0]=a;
            bah[1]=b;
            bah[2]=c;
            bah[3]=d;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(bah[j]>bah[j+1])
                    {
                        temp=bah[j];
                        bah[j]=bah[j+1];
                        bah[j+1]=temp;
                    }
                }
            }
            if(bah[0]==bah[1]&&bah[2]==bah[3]) cout<<"rectangle"<<endl;
            else cout<<"quadrangle"<<endl;
        }
    }
}
