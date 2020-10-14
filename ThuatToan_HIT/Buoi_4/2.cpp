#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int a[n+5][m+5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ( i == 0 )
            {
                cout<<a[i][j]<<" ";
            }
            else if (  j == m-1 )
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = m-2; j >= 0; j--)
        {
            if ( i == n-1)
            {
                cout<<a[i][j]<<" ";
            }
            else if ( j == 0 )
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
    return 0;
}
