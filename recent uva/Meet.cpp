#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
void pri(vector<int>arr)
{
    for(int i = 0; i < arr.size(); ++i) cout << arr[i] << " "; cout << endl;
}
int Main()
{
    //int cnt = 0;
    //for(int i = 0; i < (1 << 8); ++i) for(int j = 0; j < (1 << 8); ++j) for(int k = 0; k < (1 << 8); ++k) {++cnt;} cout << cnt;
    string s = "romeo vai";
    int len = s.length();
    for(int i = 0; i < len; ++i)
    {
        if(s[i] == 'i')
            cout << "<i>";
        else
            cout << s[i];
    }
    cout << endl;
}
int main()
{
    int A[] = {1,2,3};
    int B[] = {-1,-4,-5};
    int C[] = {1,5,8};
    int D[] = {9,8,-5};
    vector<int> sumA, sumB;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            sumA.push_back(A[i] + B[j]);
        }
    }
    sort(sumA.begin(), sumA.end());
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            int x = C[i] + D[j];
            int first = 0, last = sumA.size() - 1;
            while(first <= last)
            {
                int mid = (first + last) / 2;
                if(sumA[mid] + x == 0)
                {
                    cout << sumA[mid] << " " << C[i] << " " << D[j] << endl;
                    break;
                }
                else if(sumA[mid] + x > 0)
                {
                    last = mid - 1;

                }
                else
                {
                    first = mid + 1;
                }
            }
        }
    }
    return 0;
}
