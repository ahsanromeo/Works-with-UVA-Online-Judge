#include <iostream>
using namespace std;
#include <queue>
int main()
{

    int n, m, i, c, tc, e, f;
    while(cin>>n&&n)
    {
        priority_queue<int>q;
        for(i=0;i<n;i++)
        {
            cin>>m;
            q.push(-m);
        }
        tc=0;
        for(i=0;i<n-1;i++)
        {
            e=-q.top();
            q.pop();
            f=-q.top();
            q.pop();
            c=e+f;
            q.push(-c);
            tc+=c;
        }
        cout<<tc<<endl;
    }

}
