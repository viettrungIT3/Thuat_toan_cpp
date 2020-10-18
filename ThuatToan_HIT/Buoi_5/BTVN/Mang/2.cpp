#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    // cout<<"Enter n, m: ";
    cin>>n>>m;
    int a[n], b[n], c[n+m];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        c[count++] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        c[count++] = b[i];
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if ( c[i] > c[j] )
            {
                swap( c[i], c[j]);
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}
