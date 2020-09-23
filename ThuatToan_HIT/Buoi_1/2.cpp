#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    long k;
    do
    {
        cin>>n>>k;
    } while ( n < 1 || k > pow(10,14));
    int dem = 0;
    int i = 1, j = n;
    if ( n + n < k)
    {
        dem = 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for ( int j = n; j >= 1; j--)
            {
                if ( i + j == k )
                {
                    dem++;
                    cout<<i<<" "<<j<<endl;
                }
                if ( (j-i) <= 0 )
                {
                    break;
                }
                
            }
        }
    }
    
    
    cout<<dem;
    return 0;
}
