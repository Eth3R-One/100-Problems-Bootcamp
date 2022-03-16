#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int candies;
    int sum[n];
    sum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> candies;
        sum[i] = sum[i - 1] + candies;
    }
    int left, right;
    cin >> left >> right;
    ++left;
    ++right;
    cout << sum[right] - sum[left - 1] << endl;
    return 0;
}