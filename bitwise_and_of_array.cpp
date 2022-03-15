// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int count(int n, vector<int> a, int X)
{
    int p = 0, ans = n;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (X >> i) & 1;
        if (bit == 1)
        {
            p = p | (1 << i);
        }
        else
        {
            int temp = p | (1 << i);
            int cnt = 0;
            for (auto ele : a)
            {
                if ((ele & temp) == temp)
                {
                    cnt++;
                }
            }

            ans = min(ans, n - cnt);
        }
    }
    return (ans);
}