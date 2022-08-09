#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long lng;
char s[1000010];
inline bool cv(char c)
{
    return c == 'A'||c == 'a'||c == 'E'||c == 'e'||c == 'I'||c == 'i'||c == 'O'||c == 'o'||c == 'U'||c == 'u';
}
inline bool ca(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
int main()
{
    while(gets(s))
    {
        for(lng i = 0; s[i]; ++i)
        {
            if(cv(s[i]))
            {
                for(lng j = i;; ++j)
                {
                    if(!s[j] || !ca(s[j]))
                    {
                        i = j - 1;
                        break;
                    }
                    printf("%c", s[j]);
                }
                printf("ay");
            }
            else if(ca(s[i]))
            {
                for(lng j = i + 1;; ++j)
                {
                    if(!s[j] || !ca(s[j]))
                    {
                        printf("%c", s[i]);
                        i = j - 1;
                        break;
                    }
                    printf("%c", s[j]);
                }
                printf("ay");
            }
            else
                printf("%c", s[i]);
        }
        puts("");
    }
    return 0;
}
