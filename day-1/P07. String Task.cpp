#include <bits/stdc++.h>
#include <string>
#include <cctype>
using namespace std;
int isVowel(char c)
{
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y'))
        return 1;
    else
        return 0;
}
int main()
{
    char c[110];
    cin >> c;
    char newStr[250];
    int length = strlen(c);
    int n = 0;
    for (int i = 0; i < length; i++)
    {
        if (!isVowel(c[i]))
        {
            if (isupper(c[i]))
                c[i] = tolower(c[i]);

            newStr[n++] = '.';
            newStr[n++] = c[i];
        }
    }
    newStr[n] = '\0';
    cout << newStr << endl;
    return 0;
}