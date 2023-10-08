// https://www.spoj.com/problems/NDIV/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, n;
    cin >> a >> b >> n;

    int ans = 0;
    for (long long i = a; i <= b; i++)
    {
        long long sq = sqrt(i);

        int cnt = 0;
        for (long long j = 1; j <= sq; j++)
        {
            if (i % j == 0)
            {
                if (i / j == j)
                {
                    cnt++;
                }
                else
                {
                    cnt += 2;
                }
            }
            if (cnt >= 101)
            {
                break;
            }
        }
        if (cnt == n)
        {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}