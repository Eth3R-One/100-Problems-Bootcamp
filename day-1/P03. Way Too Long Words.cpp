#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, n, l;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        cin >> s;
        l = s.length();
        if (l > 10)
            cout << s[0] << l - 2 << s[l - 1] << endl;
        else
            cout << s << endl;
    }
    return 0;
}
