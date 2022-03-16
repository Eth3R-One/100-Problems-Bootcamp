#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int values[n];
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> values[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << values[i] << " ";
    }

    return 0;
}