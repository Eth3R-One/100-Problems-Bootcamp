#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string str;
    int size;
    cin >> size;
    cin >> str;
    int eightCount = 0;
    if (size < 11)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (str[i] == '8')
            ++eightCount;
    }
    if (!eightCount)
    {
        cout << 0 << endl;
        return 0;
    }
    size /= 11;

    if (size < eightCount)
    {
        cout << size << endl;
    }
    else
    {
        cout << eightCount << endl;
    }
    return 0;
}