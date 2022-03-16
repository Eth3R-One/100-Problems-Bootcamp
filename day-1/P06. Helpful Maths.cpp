#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    char st[101];
    cin >> st;
    int one, two, three;
    one = two = three = 0;
    int len = strlen(st);
    for (int i = 0; i < len; i += 2)
    {
        if (st[i] == '1')
            ++one;
        else if (st[i] == '2')
            ++two;
        else if (st[i] == '3')
            ++three;
    }
    for (int i = 0; i < len; i += 2)
    {
        while (one--)
        {
            st[i] = '1';
            i += 2;
        }
        while (two--)
        {
            st[i] = '2';
            i += 2;
        }
        while (three--)
        {
            st[i] = '3';
            i += 2;
        }
    }
    cout << st << endl;
    return 0;
}