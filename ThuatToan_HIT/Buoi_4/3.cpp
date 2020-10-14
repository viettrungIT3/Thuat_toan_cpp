#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;      cin>>n;
    int a[n+5][n+5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>a[i][j];
        }
    }
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if ( a[i][j] != a[j][i])
            {
                count = 0;
                break;
            }
        }
        if ( count == 0)
        	break;
    }    
    if ( count == 0)
        cout<<"No";
    else 
		cout<<"Yes";
    return 0;
}
