#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define f(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long int

void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    // c_p_c();
    string s;
    cin >> s;
    for (int i = 0; i < pow(2, s.length()); i++)
    {
        // // int p = 1;
        // cout<<"the number: "<<i<<endl;
        for (int j = 0; j < s.length(); j++)
        {
            if (i&(1<<j))
            {
                cout << s[j];
            }
            
        }
        cout << endl;
    }
    return 0;
}