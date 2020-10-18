#include <iostream>
#include <math.h>
using namespace std;

long max_2( long n)
{
    if ( n == 0 )
    {
        return 0;
    }
    else if ( (n%10)%2 == 1 )
    {
        return max_2(n/10);
    }
    else
    {
        return max ( max_2(n/10), n%10);
    }
    
}

int main(int argc, char const *argv[])
{
    long n;
    do
    {
        // cout<<"Enter n = ";
        cin>>n;
    } while ( n <= 1 || n >= pow(10,12));
    // cout<<"KQ = ";
    cout<<max_2(n);
    return 0;
}
