#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int size = str.length();
    if (size < 7)
    {
        cout << "NO" << endl;
        return 0;
    }
    int flag = 0;
    for (int i = 0; i < size; ++i)
    {
        flag = 0;
        int k = i + 6;
        char ch = str[i];
        for (int j = i + 1; j <= k; ++j)
        {
            if (ch != str[j])
            {
                flag = 0;
                break;
            }
            else if (ch == str[j])
                flag = 1;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (flag == 0)
        cout << "NO" << endl;
    return 0;
}