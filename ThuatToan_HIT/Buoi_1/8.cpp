#include <iostream>
#include <math.h>
using namespace std;

bool ktSNT( long n)
{
    if ( n < 2 )
    {
        return false;
    }
    for (int i = 2; i <= sqrt((float)n); i++)
    {
        if ( n % i == 0 )
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    long n, i = 2;
    cin>>n;
    while ( n  != 1 )
    {
        if ( ktSNT(i) )
        {
            if ( n % i == 0 )
            {
                cout<<i;
                n = n/i;
                if ( n >= i )
                {
                    cout<<"x";
                }
                i--;
            }  
        }
        i++;
    }
    
    return 0;
}
