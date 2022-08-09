#include <iostream>
using namespace std;
string str_rev(string a);
bool pairs(string s, int l);
bool thir(string a);
bool sec(string a);
int main()
{
    string s, in, ten;
    int tc, i, j, l, p1, p2, f;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        getline(cin,in);
        l=in.size();
        if(l==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        s="";
        for(i=0; i<l; ++i)
            if(in[i]!=' ')
                s+=in[i];
        l=s.size();
        if(l==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(l%2!=0)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(pairs(s,l)==false)
        {
            cout<<"No"<<endl;
            continue;
        }
        f=1;
        for(i=0; i<s.size(); ++i)
        {
            if(s[i]==']')
            {
                p2=i;
                ten="";
                for(j=i-1;; --j)
                {
                    if(j==-1)
                    {
                        f=0;
                        break;
                    }
                    if(s[j]=='[')
                    {
                        p1=j;
                        break;
                    }
                    ten+=s[j];
                }
                if(f==0)
                {
                    break;
                }
                ten=str_rev(ten);
                s.erase(s.begin()+p1,s.begin()+(p2+1));
                if(thir(ten)==false)
                {
                    f=0;
                    break;
                }
                i=0;
            }
            else if(s[i]==')')
            {
                p2=i;
                ten="";
                for(j=i-1;; --j)
                {
                    if(j==-1)
                    {
                        f=0;
                        break;
                    }
                    if(s[j]=='(')
                    {
                        p1=j;
                        break;
                    }
                    ten+=s[j];
                }
                if(f==0)
                {
                    break;
                }
                ten=str_rev(ten);
                s.erase(s.begin()+p1,s.begin()+(p2+1));
                if(sec(ten)==false)
                {
                    f=0;
                    break;
                }
                i=0;
            }
        }
        if(f==1 && s.size()==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
bool pairs(string s, int l)
{
    int thir1=0, thir2=0, sec1=0, sec2=0;
    for(int i=0; i<l; ++i)
    {
        if(s[i]=='[')
            ++thir1;
        else if(s[i]==']')
            ++thir2;
        else if(s[i]=='(')
            ++sec1;
        else if(s[i]==')')
            ++sec2;
    }
    if(thir1==thir2&&sec1==sec2)
        return true;
    return false;
}
string str_rev(string a)
{
    string b="";
    for(int i=a.size()-1; i>=0; --i)
        b+=a[i];
    return b;
}
bool thir(string a)
{
    int l=a.size(), i, j, f=1;
    if(l==0)
        return true;
    if(l%2!=0)
        return false;
    for(i=0; i<a.size(); ++i)
    {
        if(a[i]==')')
        {
            a.erase(a.begin()+i);
            for(j=i;; --j)
            {
                if(j==-1)
                {
                    f=0;
                    break;
                }
                if(a[j]=='(')
                {
                    a.erase(a.begin()+j);
                    break;
                }
            }
            if(f==0)
            {
                break;
            }
            i=0;
        }
    }
    if(f==1&&a.size()==0)
        return true;
    return false;
}
bool sec(string a)
{
    int l=a.size(), i, j, f=1;
    if(l==0)
        return true;
    if(l%2!=0)
        return false;
    for(i=0; i<a.size(); ++i)
    {
        if(a[i]==']')
        {
            a.erase(a.begin()+i);
            for(j=i;; --j)
            {
                if(j==-1)
                {
                    f=0;
                    break;
                }
                if(a[j]=='[')
                {
                    a.erase(a.begin()+j);
                    break;
                }
            }
            if(f==0)
            {
                break;
            }
            i=0;
        }
    }
    if(f==1&&a.size()==0)
        return true;
    return false;
}
