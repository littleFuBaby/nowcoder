#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s[1000];
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    sort(s, s+n);
    for(int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}