// Upcoder #QuasiamicablePair

#include <iostream>
#include <math.h>
using namespace std;

int SumUOC( int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if ( n % i == 0 )
        {
            count += i;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int a, b;
    
    do
    {
        cin>>a>>b;
    } while ( a <= 0 || b <= 0);
    
    if (  SumUOC(a) == b+1 || SumUOC(b) == a+1 )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
