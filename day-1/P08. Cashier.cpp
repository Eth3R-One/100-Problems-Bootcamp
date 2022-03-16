#include <bits/stdc++.h>
#include <string>
using namespace std;
const int N = 3e5 + 9;
long long st[N], len[N];
int main()
{
    unsigned long long i, j, k, n, m, t, per;
    cin >> n >> t >> per;
    for (i = 1; i <= n; i++)
    {
        cin >> st[i] >> len[i];
    }
    long long pre = 0, ans = 0;
    for (i = 1; i <= n; i++)
    {
        ans += (st[i] - pre) / per;
        pre = st[i] + len[i];
    }
    ans += (t - pre) / per;
    cout << ans << endl;
    return 0;
}