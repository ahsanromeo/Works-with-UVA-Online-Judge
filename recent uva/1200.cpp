#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string line;
    while(cin>>line)
    {
        int l=line.size(), i, j;
        string left="", right="";
        for(i=0;;i++)
        {
            if(line[i]=='=')
            {
                j=i+1;
                break;
            }
            left+=line[i];
        }
        for(i=j;i<l;i++)
        {
            right+=line[i];
        }
        vector<long long>cox;
        vector<string>xs;
        vector<long long>cons;
        vector<string>cs;
        int lr=right.size(), ll=left.size();
        string temp;
        for(i=-1;i<ll;i++)
        {
            temp=="";
            if(i==-1)
            {
                for(j=i+1;;j++)
                {

                }
            }
        }
    }
}
